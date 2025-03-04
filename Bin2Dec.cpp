// Tony Borgman
// Microprocessor Assembly Lang (CIS-2420) |
// Lab Assignment #1 - Binary to Decimal Converter
// Date of Completion: March 3, 2025



#include <iostream> // cin and cout
#include <cmath> // Math functions
#include <string>
#include <stdlib.h>

int userinput;
using namespace std;

// Binary to Decimal function.
int Bin2Dec (const string& binaryString)
{
    int decVal = 0;
    int pwr = 0;

    for (int indx = binaryString.length() -1; indx >= 0; --indx)
    {
        if (binaryString[indx] == '1')
        {
            decVal += pow(2, pwr);
        } else if (binaryString[indx] != '0') {
           return -1; // No 0 or 1 found. Input fails
        }
        pwr++;
    }
    return decVal;
}

int main()
{
   string binInput;

   // User inputs the binary number of their choosing.
   cout << "Hello! Please enter the binary number you want to convert: ";
   cin >> binInput;


   int decOutput = Bin2Dec(binInput);


   if(decOutput != -1)
   {
       cout << "The decimal form is: " << decOutput << endl;
    } else {
        cout << "Invalid input!";
        int main();
    }
    system("pause");
   }
