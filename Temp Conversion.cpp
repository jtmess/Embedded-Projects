/* Heather Leahy and Jake Messner
* TempConversion.cpp
* Lab #2
* Convert Fahrenheit to Celsius, Rankin, and Kelvin
*         Specifics: input values are in degrees fahrenheit
*         Input: degrees fahrenheit
*         Output: degrees celsius, rankin, and kelvin
*         Functions: main()
*******************************************************************************/
#include <iostream>  /*include header file to do input and output*/
#include <fstream>   /*include the library so you can read/write files*/
#include <iomanip>   /*include the library that allows formatting*/
using namespace std; /*allow operations from standard library*/

int main (void)
{
         cout<<"Heather Leahy and Jake Messner.. TempConversion.cpp Lab #2 C++ Tutorial\n"<<endl;
         
         double fahrenheits, fahrenheite, rankin, celsius, kelvin;

		ofstream outfile("temps.txt");
		outfile.open();
		
         //C++ commandto print the screen:
               cout<<"ENTER STARTING TEMPERATURE IN DEGREES FAHRENHEIT ";
               
         //C++ command to read in values 
               cin>>fahrenheit;
               
               celsius = (fahrenheit-32.0)*(5.0/9.0);
               kelvin = ((fahrenheit-32.0)*(5.0/9.0)+273.15);
               rankin = fahrenheit+459.67;
               //calculate rankin, celsius, and kelvin from fahrenheit
         
         //Display results to console window (std output):
                   cout<<"Fahrenheit = "<<fahrenheit<<" degrees.\n";
                   cout<<"Celsius = "<<celsius<< " degrees.\n";
                   cout<<"Kelvin = "<<kelvin<< ".\n";
                   cout<<"Rankin = "<<rankin<<".\n\n\n";
         
         system  ("pause");  /*console window 'wait'*/
         return 0;
         }  /*end of main function*/
         
