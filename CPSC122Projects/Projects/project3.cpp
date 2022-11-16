/*
Name: Aaliyah Mae Lewis
Class: CPSC122, Section 1
Date: September 12, 2022
Assignment: Project 3
Description: Program will convert digit strings to variables, 
to multiply newly created int variables and writes product to output file
*/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include<math.h>
#include <fstream>
using namespace std;

int myAtoi(char str[]);
int myStrenlen(char str[]);

int main(int argc, char* argv[])
{
        ofstream cmdFile;
        cmdFile.open("Project.txt");
        char* first = argv[1];
        int first_gabby = myAtoi(first);
        cmdFile << "First Number From File: " << first_gabby  << endl;
        //cout << first_gabby << endl;
        int gabby = myStrenlen(first);
        char* second = argv[2];
        int second_line = myAtoi(second);
        cmdFile << "Second Number From File: " << second_line << endl;
        cmdFile << "Variables Multiplied Is: " << second_line * first_gabby << endl;
        int lengthTwo = myStrenlen(second);
        cmdFile << "\nLength of the First String: " << gabby << endl;
        cmdFile << "Length of the Second String: " << lengthTwo << endl;
        cmdFile << "Length of Strings Multiplied: " << lengthTwo * gabby << endl;
        cmdFile.close();

        ifstream takeFile;
        int readFile;
        string firstNumber;

        takeFile.open("Project.txt");

        if(takeFile.is_open())
        {
            while(takeFile)
            {
                getline(takeFile, firstNumber);
                cout << firstNumber << endl;
            }
        }

       takeFile.close();

 return 0;
}

int myAtoi(char str[])
{
    int rayna = 0;
    int ryan = myStrenlen(str); // storing length of string into ryan
    for(int i=0; i < ryan; i++)
    {
        
        rayna += (pow(10, ryan - i - 1) * (str[i] - '0'));

        // char gio = str[i]; // storing character from current string 
        // int digit = gio - 0; 
        // digit = digit*(pow(10, ryan - i - 1)); //moves through each spot of the array
        // rayna += digit;
    }
    return rayna;
}

int myStrenlen(char str[])
{
        int curry = 0;
        char cmdLine = str[curry];

        while(cmdLine != '\0') // checking command line statements
        {
         ++curry;
         cmdLine = str[curry];
         
        }
    return curry;
}

