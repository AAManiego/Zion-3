/*
Name: Aaliyah Mae Lewis
Class: CPSC 122, Section 1
Date: September 7, 2022
Assignment: Project 1
Description:  Program illustrates 
  generating prime numbers from the command line
*/

#include <iostream>
#include<math.h>
using namespace std;

bool isPrime(int);                    // indicating the number of primes to display;

int main(int argc,char* argv[]) 
{
    int numOfPrime = atoi(argv[1]);
    int cols = atoi(argv[2]);
   
    int candPrime = 2; 
    int count = 0;
    while(count < numOfPrime)         //Description: Loops over all necessary candidate primes, invoking isPrime on each,
    {                                 // displaying in column fashion those that are prime
      if(isPrime(candPrime))          // input: integer, totalPrimes, indicating the number of primes to display; integers
      {                               // cols, indicating over how many columns the primes are to be displayed
          count++;
          cout << candPrime << '\t';
          if (count % cols == 0)
            cout << endl;
      }
      candPrime++;
    }
      return 0;
}

/*
	Description: Determines whether input integer is prime
	Input: integer whose primality is to be judged
   Returns: true if num is prime, false otherwise
	*/
bool isPrime(int n)                       
{                                         
      if(n == 1 || n == 0 )return false;  
      for (int c=2; c<=n/2; c++)
      {
        if(n % c == 0) return false;

      }
  return true;
}
