/*
Name: Aaliyah Mae Lewis
Class: CPSC 122, Section 1
Date: September 7, 2022
Assignment: Project 1
Description:  Program illustrates 
  generating prime numbers from the command line
*/

#include <iostream>
using namespace std;

bool isPrime(int n) // Determines whether input integer is prime
{
    if( n == 0 || n==1)
        isPrime = false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            isPrime = false;
    }
    return true;
}

void display(int, int);  //function prototype must be declared
                         //before use.  prototype includes
			            //return type, function name, parameters type(s)

int main()
{
 int n = 100;
 int i,c; 

 cout << "How many integers do you want to see?" << endl; 
 cin >> n;

 for (int n = 1; n <= i; n++)
 {
    if(isPrime(i))
    {
        cout << "Distributed over how many columns" << endl; 
        cin >> c;
        display(n,c);
        cout << endl;
    }
 }

 return 0;
} 

void display(int n, int c)
{
 int ct = 1;
 int rowCt = 1;
 
 while (ct <= n)
  {
   cout << ct << '\t';  //tab to next col 
   if (ct % c == 0)  
   {
    cout << endl;
   ct++;
   }
  }
}


