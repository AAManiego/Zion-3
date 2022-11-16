/*
Name: Aaliyah Mae Lewis
Class: CPSC 122, Section 1
Date: September 28, 2022
Assignment: Project 5
Description:  This program demonstrate sorting strings
*/

#include<iostream>
#include<fstream>
#include<string>


using namespace std;

void bubbleSort(string array[], int numLines);
void sink(string array[], int bottom);
void shift(string array[], int cur);
void fileOpen(fstream& file, string name, int mode);


int main(int argc, char* argv[])
{
   fstream inputFile; 
   fstream outputFile;
   fileOpen(inputFile, argv[1], 1);
   fileOpen(outputFile, argv[2], 2);

    string createArray[100];
    string grab;
    int loop = 0;

    while(!inputFile.eof())
    {
        inputFile >> grab;
        createArray[loop] = grab;
        loop++;
        
    }
        bubbleSort(createArray, loop);
        for(int k = 0; k < loop; k++)
        {
            outputFile << createArray[k] << " ";
        }
    
    
    inputFile.close();
    outputFile.close();

    return 0;
}


void bubbleSort(string array[], int numLines)
{
    int bottom = numLines;
    for(int i = 0; i < numLines; i++)
    { 
        bottom = numLines - i;
        sink(array, bottom);
        bottom--;
        //i++;
    }
}

void sink(string array[], int bottom)
{
    for(int cur = 0; cur < bottom - 1; cur++)
    {
        if (array[cur] > array[cur + 1])
        {
            shift(array, cur);
            //cur++;
        }
            
    }
}

void shift(string array[], int cur)
{
 string difArray = array[cur];
 array[cur] = array[cur+1];
 array[cur+1] = difArray;
}


/*
Description: function opens a file
Input: file stream object reference, name of the file, mode of open
Output: input file name is opened. 
*/
void fileOpen(fstream& file, string name, int mode)
{
 string fileType;

 if (mode == 1)
  fileType = "input";
 if (mode == 2)
  fileType = "output";

 if (mode == 1)
  file.open(name, ios::in);  //available thorugh fstream
 else
  if (mode == 2)
   file.open(name, ios::out);  //available through fstream;

 if (file.fail()) //error condition 
 {
  cout << "Error opening " << fileType << " file" << endl; 
  exit(EXIT_FAILURE);
 }
}