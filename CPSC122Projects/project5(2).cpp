/*
Name: Aaliyah Mae Lewis
Class: CPSC 122, Section 1
Date: September 28, 2022
Assignment: Project 5
Description:  This program demonstrate sorting strings
*/

int main(argc, char*, argv[])
{

}



void bubblesorting(int arry[], int n)
{
   for(int i = 0; i < n; i++)
   {
    for(int  = 0; x < n - i - 1; x++)
    {
        if(arry[x] > arry[x+1])
            swap(arry[x], arr[x+1]);
    }
   }
}

void printArray(int arry[], int size)
{
    for(int i = 0; i < size; i++)
    cout << arr[i] << " "; 
    cout << endl;
}

string fileReader(string fileIn)
{
    ifstream txtFile; 
    txtFile.open(fileIn);
    string line; 

    while(getline(txtFile, line))
    {
        cout << line;
    }
    return line;

}