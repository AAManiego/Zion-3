/*
Name: Aaliyah Mae Lewis
Class: CPSC 122, Section 1
Date: September 28, 2022
Assignment: Project 4
Description:  This program uses the affine cipher to encrypt/decrypt a file
*/

#include<iostream>
#include<fstream> 
#include<stdlib.h>
#include<cstdlib>
#include<string>
#include<time.h>

using namespace std; 

void keyGen(string keyfile);
char encrypt(char n, int alpha, int beta);
char decrypt(char n, int alpha, int beta);
void fileControl(int mode, string keyFile, string fileIn, string fileOut);
void fileOpen(fstream&, string name, int mode);

int main(int argc, char* argv[])

{
    int mode = atoi(argv[1]);

   switch(mode)
   {
   case 0:
   {
        keyGen(argv[2]);
        break;
   }
    case 1:
    {
        fileControl(mode, argv[2], argv[3], argv[4]);
        break; 
    }
    
    case 2:
    {
        fileControl(mode,argv[2], argv[3], argv[4]);
        break;
    }
    return 0;
    }  
}    


/*
Description: Encrypts an upper case alphabetic character using the affine cipher
Input: upper case alphabetic character, valid alpha and beta values
Returns: encrypted version of ch
*/
char encrypt(char ch, int alpha, int beta)
{
    int result = ((ch - 'A')* alpha);
    result +=  beta;
    result %= 26;
    result += 'A';
    //cout << result;
    
    return char(result);
}

/*
Description: Decrypts an upper case alphabetic character using the Caesar cipher
Input: upper case alphabetic character, valid key
Returns: decrypted version of input
*/
char decrypt(char ch, int alpha, int beta)
   {
        int inverseA = 0;
        int check = 0;

        for (int i = 0; i < 25; i++)
        {
            check = (alpha * i) % 26;
            if (check == 1)
                {
                    inverseA = i;
                }
        }
        for(int i = 0; i < ch; i++)
        {
            if(ch != ' ')
            {
                int decrypted = ((ch + 'A' - beta)* inverseA);
                decrypted %= 26;
                decrypted += 'A';
                //cout << decrypted;
            
            return char(decrypted);
            }
        }
   }

/*
Description: Randomly generates and stores alpha and beta values.
The alpha value is randomly drawn from the the set: 
{1,3,5,7,9,11,15,17,19,21, 23,25}
The beta value is randomly drawn from the range: [1..25]  
Input: name of file that stores the keys
Output: alpha and beta values on subsequent lines of keyFile
*/

void keyGen(string keyFile)
{
    fstream fout;
    fout.open(keyFile, fstream :: out);

    srand(time(NULL));
    char randSet[12] = {'1','3','5','7','9','11','15','17','19','21','23','25'};
    
    int alphaValue = rand() % 12;
    fout << randSet[alphaValue];

    int betaValue = rand() % 25;
    fout << " " << betaValue;

    fout.close();
}

/*
Description: invokes fileOpen (../B-Files/7-openFileError.cpp in my GitHub repo) on all files. 
Closes all files. Reads key file. Reads the input file and either invokes encrypt or decrypt. 
If the action is encrypt, alphabetic characters are transformed to upper case.  
Writes the result of encrypt or decrypt to the output file. 
Input: names of key file, input file and output file. mode value of 1 or 2
Output: writes to the output file
*/

void fileControl(int mode, string keyFile, string fileIn, string fileOut)
    {
        // char value, secondValue;
        // int value = 17;
        // int secondValue = 20;
        

        fstream keyOpen;
        fstream fileInput; 
        fstream fileOutput;
       
        cout <<mode;


            if(mode == 1)
            {
                fileOpen(fileInput, fileIn, mode);
                fileOpen(fileOutput,fileOut, 2);
                
                keyGen(keyFile);
                int array[3];
                fileOpen(keyOpen, keyFile, 1);

                for(int i = 0; i <= 2; i++)
                {
                    int number; 
                    keyOpen >> number;
                    array[i] = number;
                }

                while(!fileInput.eof())
                {
                    char alex = fileInput.get();
                    //cout << alex;

                        if(isalpha(alex))
                        {
                            //cout << "Trying to Encrypt" << endl;
                            char encryptAlex = encrypt(alex,array[0],array[2]);
                            fileOutput << encryptAlex;
                        }
                        else
                        {
                            fileOutput << alex;
                        }
                }
            }
            else if(mode == 2)
            {
                int array[3];
                fileOpen(keyOpen, keyFile, 1);
                for(int i = 0; i <= 2; i++)
                {
                    int number; 
                    keyOpen >> number;
                    array[i] = number;
                }

                fileOpen(fileInput, fileIn, 1);
                fileOpen(fileOutput,fileOut, 2);

                while(!fileInput.eof()
                {
                    char arianne = fileInput.get();
                    if(isalpha(arianne))
                        {
                            char decryptarianne = decrypt(arianne,array[0],array[2]);
                            fileOutput << decryptarianne;
                        }
                    else
                        {
                            fileOutput << arianne;
                        }
                }
             }
             fileInput.close();
             fileOutput.close();
             keyOpen.close();
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



