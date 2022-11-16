#include <iostream>
using namespace std;

#include "8-MyString.h"
#include <cstring>

//Constructor
MyString::MyString(char const* strIn)
{
 length = strlen(strIn);  //strlen function
 str = new char[length + 1];
 strcpy(str, strIn); //strlen function

}

//Destructor function
//once you get the constructor working, remove the comments.
MyString::~MyString()
{
 delete []str; 
}

void MyString::myDisplay()
{
 cout << str << endl;
}

int MyString::myStrLen(char const* strIn)
{
 int idx = 0;
 while (strIn[idx] != '\0')
  idx++;
 return idx;
}

int MyString::myStrlen()
{
 return myStrLen(str);
}


void MyString::myStrcpy(char const* strIn)   //replacing the string with a new input 
{
    int index = 0;                            // counter to go through strIn
    while(strIn[index] != '\0')              // going through strIn
    {
        str[index] = strIn[index];           //replacing with new index
        index++;
    }
    str[index] = '\0';                      // until reaches null character
    
}


bool MyString::isEqual(char const* strIn)
{
    int index = 0; 
    while(strIn[index] != '\0' && index < length)
    {
        if(strIn[index] != str[index])
            return false;
        else
            index++;
    }
    return true;
}

//  int MyString::find(char const* strIn); 
//  {
//     return 0;
//  }

void MyString::concat(char const* strIn) //concating = adding to the end of the string
{
 int index = 0;
 int length = myStrLen(strIn);

for(index = 0; index < length; index++)
{
    str[index+length] = strIn[index];
}
str[index + length] = '\0';
}

int MyString::find(char const* strIn)
{
    int index = 0;
    int length = myStrLen(strIn);
    bool found = false;
    while(str[index] != '\0')
    {
        if(str[index] == strIn[0])
        {
            if((length - index + 1) - length >= 0)
            {
                for(int i = 0; i < length; i++)
                {
                    if(str[index + i] != strIn[i])
                    {
                        found = false;
                        break;
                    }
                    found = true;
                }
            }
            if(found)
            {
                return index;
            }
        }
        index++;
    }
    
    return -1;
}

// const char* str() const;
// {
//     return buf;
// } 
            
// unsigned int length();
// {
//     return size;
// }
