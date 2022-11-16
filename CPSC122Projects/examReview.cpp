/*
Name: Aaliyah Mae Lewis
Class: CPSC 122, Section 1
Exam Rewview: Study Guide Follow-Along
*/

#include <iostream>
#include<math.h>
using namespace std;

/*
    pre: base and exp are integers with base >= 1 and exp >= 0
    post: returns base to the exp power without using a built-in function
    int myExp(int base, int exp)
*/

int myExp(int base, int exp)
{
    int value =1; 
    for(int i=0; i < exp; i++)
    {
        value = value * base;
    }
    return value;
}

/*
    pre: value is an integer >= 0
    post: returns the factorial of num.  Example: fact(0) = 1, fact(3) = 3 * 2 * 1

*/

int fact(int num)
{
    if(num >= 1)
    {
        return num * fact(num-1);
    }
    else 
    return 1;

}

//using a for-loop for this function 

int factorialtwo(int num)
{
    int start = 1, i;
    for( i = 2; i <= num; i++)
        start *= i; // multiply and assignment operator. 
    return start; 
}


/*
Write the following function
pre: num is a positive integer
post: returns true if num is odd, false otherwise
*/

bool isOdd(int num)
{
    if(num % 2 == 0 )
    {
    cout << "Number is even" << endl;
    return true;
    }
    else
        cout << "Number is even" << endl;
        return false;
}