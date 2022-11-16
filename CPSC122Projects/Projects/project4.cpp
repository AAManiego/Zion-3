/*
Name: Aaliyah Mae Lewis
Class: CPSC 122, Section 1
Date: September 20, 2022
Assignment: Project 3
Description:  This program uses the substitution cipher to encrypt/decrypt a file
*/

#include<iostream>
#include<fstream> 
#include<stdlib.h>
#include<string>

using namespace std; 


void keyGen(string);
char encrypt(char n, int key);
char decrypt(char n, int key);
void toBlock(string PTFile);

int main(int argc, char* argv[])
{

    string file = "poetry.txt";
    ifstream plainText;
    ofstream plainTextOutput;
   
    plainText.open(file);

    int mode = atoi(argv[1]);
    string rayna = " ";
    int key = 3;

   switch(mode)
   {
   case 0:
   {
        keyGen(argv[2]);
        break;
   }
    case 1:
    {
        toBlock("poetry.txt");
        ifstream blockText; 
        ofstream encryptedText;

        blockText.open("blockText.txt");
        encryptedText.open("encryption.txt");

        while(!blockText.eof())
        {
            char alex = blockText.get();

            if(isalpha(alex))
                {
                    char encryptAlex = encrypt(alex,key);
                    encryptedText << encryptAlex;
                }
            else
                encryptedText << alex;
        }
             blockText.close();
             encryptedText.close();
             break;
     }
    
    case 2:
    {
        ifstream encryptedText; 
        ofstream decryptedText;

        encryptedText.open("encryption.txt");
        decryptedText.open("decryption.txt");

        while(!encryptedText.eof())
        {
            char arianne = encryptedText.get();
            if(isalpha(arianne))
                {
                    char decryptarianne = decrypt(arianne,key);
                    decryptedText << decryptarianne;
                }
            else
                    decryptedText << arianne;
        }
        encryptedText.close();
        decryptedText.close();
        break;
    }
    return 0;

    }     
}

/*
Description: Encrypts an upper case alphabetic character using the Caesar cipher
Input: upper case alphabetic character, valid key
Returns: encrypted version of ch
*/
char encrypt(char n, int key)
{

    int shift = n - 'A';
    shift = ((shift+key) % 26)+ 'A';

    return char(shift);
}

/*
Description: Decrypts an upper case alphabetic character using the Caesar cipher
Input: upper case alphabetic character, valid key
Returns: decrypted version of input
*/
char decrypt(char n, int key)
   {
        char decrypted = encrypt(n, 26-key);
        return decrypted;
    }

/*
Description: Randomly generates an integer in the range: [1..25]
Input: name of keyFile
Output: Stores randomly generated integer in keyFile
*/
void keyGen(string keyFile)
{
    char randSet[12] = {1,3,5,7,9,11,15,17,19,21, 23,25};
    int alphaValue = rand() % 12;
    int betaValue = rand() % 25;
    fstream fout;
    fout.open(keyFile, fstream :: out);
    fout << randSet[alphaValue] << endl;
    fout << randSet[betaValue] << endl;

    fout.close();
}



/*
Description: Transforms ptFile into block text
Input: name of PTfile, BKfile
Output: BKfiile contains block text version of  PTFile
BKfiile is a hard-coded constant file name 
Block text has::
1. periods, commas, spaces removed
2. all alphabetic characters are upper case
3. no more than 50 characters per line
*/
void toBlock(string PTFile)
{
    //tring file = "encryption.txt";
    ifstream plainText;
    ofstream blockTextOutput;
   
    plainText.open(PTFile);
    blockTextOutput.open("blockText.txt");
   
    char dom = ' ';
    string anjie = " ";

    while(!plainText.eof())
    {
        char dom = plainText.get();
        if(isalpha(dom))
            {
                anjie += dom;
            }
    }

        int char_count = 0;
            for(char ch: anjie)
                {
                    blockTextOutput << char(toupper(ch)); //toupper changes current character to uppercase, will give ACII value
                    char_count++;
                        if(char_count == 50)
                            {
                                blockTextOutput << endl;
                                char_count = 0;
                            }
                }

    plainText.close();
    blockTextOutput.close();
}



