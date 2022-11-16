/*
Name: Aaliyah Mae Lewis
Class: CPSC 122, Section 1
Date: September 28, 2022
Assignment: Project 7
Description:  This program demonstrate a classis searth algorithm: binary search. 
*/

#include<iostream> 
#include<fstream>
using namespace std; 

bool binarySrch(int array[], int size, int target);
void fillArray(int arrayFill[], int limit, int size);
void bubbleSort(int array[], int numLines);
void shift(int array[], int cur);
void sink(int array[], int bottom);



int main(int argc, char* argv[])
{
    int jenna[atoi(argv[1])]; 
    int ginalynsLimit = atoi(argv[2]);
    int megsTarget = atoi(argv[3]);
    ofstream zionsOutput; 
    zionsOutput.open(argv[4]);

    fillArray(jenna, ginalynsLimit, atoi(argv[1]));
    bubbleSort(jenna, atoi(argv[1]));

    for(int i : jenna)
        cout << i << endl;

    binarySrch(jenna, atoi(argv[1]), megsTarget);

    if(binarySrch(jenna, atoi(argv[1]), megsTarget))
    {
        cout << "Target Number Found: " << megsTarget << endl;
    }
    else 
        cout << "Target Not Found " << endl;
    

    for(int i : jenna)
    {
        zionsOutput << i << endl;
    }
    zionsOutput.close();
    return 0;
}

bool binarySrch(int array[], int size, int target)
{
 int front = 0;
 int back = size - 1;
 int m = 0;
 
 while(front <= back)
 {
  m = (front + back)/2;
  if (array[m] == target)
   return true;
  
  if (target < array[m])
   back = m - 1;

  else
   front = m + 1;
 }
 if(array[m] == target)
    return true;
 return false;
}

void fillArray(int arrayFill[], int limit, int size)
{

 unsigned seed = time(NULL);
 srand(seed); 

 for (int i = 0; i < size; i++) 
   arrayFill[i] = rand() % limit + 1;  
}

void bubbleSort(int array[], int numLines)
{
    int bottom = numLines;
    for(int i = 0; i < numLines; i++)
    { 
        bottom = numLines - i;
        sink(array, bottom);
        bottom--;
    }
}

void sink(int array[], int bottom)
{
    for(int cur = 0; cur < bottom - 1; cur++)
    {
        if (array[cur] > array[cur + 1])
        {
            shift(array, cur);
        }
            
    }
}

void shift(int array[], int cur)
{
 int difArray = array[cur];
 array[cur] = array[cur+1];
 array[cur+1] = difArray;
}

