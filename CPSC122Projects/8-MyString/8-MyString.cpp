/*
Name: Aaliyah Mae Lewis
Class: CPSC 122, Section 1
Date Submitted: October 31, 2022
Assignment: Project 8
Description: Program illustrates using class MyString 
*/

#include "8-MyString.h"
#include <iostream> 
using namespace std;


int main(int argc, char* argv[])
{
 MyString str1(argv[1]);
 //MyString* str2 = new MyString(argv[1]);

 //Test of myDisplay
//  cout << "*****Test myDisplay*****" << endl;
//  cout << "static test" << endl;
//  cout << "output should be the command line input" << endl;
//  str1.myDisplay();
//  cout << endl;
 //End Test of myDisplay

/*
 //Test of myStrlen
 cout << "*****Test myStrlen*****" << endl;
 cout << "dynamic test" << endl;
 cout << "output should be length of command line input" << endl;
 cout << str2->myStrlen() << endl;
 cout << endl;
 //End Test of myStrlen
*/


// //Test of myStrcpy
// cout << "*****Test myStrcpy*****" << endl;
// cout << "Testing moving the contents of str1 to str2 with strcpy..." << endl;
// char* str2 = " String 2";
// str1.myStrcpy(str2);

// cout << "Attempting to print out str1 after copying..." << endl;
// str1.myDisplay();
// cout << endl;
 
//  cout << endl;
//  //End Test of myStrlen


//Test of cancat

// cout << "*****Test Cancatl*****" << endl;
// cout << "Testing cancating one string to another" << endl;
// char* str2 = "World";

// str1.concat(str2);
// str1.myDisplay();

//  //End Test of isEqual

// //Test of myStrcpy
// cout << "*****Test myStrcpy*****" << endl;
// cout << "Testing moving the contents of str1 to str2 with strcpy..." << endl;
// char* str2 = " String 2";
// str1.myStrcpy(str2);

// cout << "Attempting to print out str1 after copying..." << endl;
// str1.myDisplay();
// cout << endl;
 
//  cout << endl;
//  //End Test of myStrlen


//Test of isSub

// cout << "*****Test Find*****" << endl;
// char* str4 = "ello";
// char* str5 = "World";
// cout << "Testing Finding a substring in a given string..." << endl;
// cout << "The Current String Is: " << endl;
// str1.myDisplay();
// cout << "First search is for ello. Second is for World..." << endl;
// cout << "ello can be found in the string at index: " << str1.find(str4) << endl;
// cout << "world can be found in the string at index: " << str1.find(str5) << endl;
// cout << endl;


 //End Test of isEqual

 return 0;  
}
   
  
