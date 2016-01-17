/*
Jake Messner
pyramid.cpp
Lab #1
Description: compute volume of pyramid with rectangular base
        Specifics: all values are given in cm
        Input: 2 sides of pyramid base
        Output: volume of pyramid in cm^3
        Functions: main()
        Updated: 10/20/10
*/
              

#include <iostream>  // include header file to do input and output
#include <fstream>   //include the library so you can read/write files
#include <iomanip>   //include the library that allows formatting
using namespace std; //allow operations from a standard library
#define HEIGHT 7.    //value of HEIGHT is given, defined once only

int main (void)
{
    cout << "Dris A.Skollar.. PYRJTM.cpp Lab # C++ Tutorial \n" << endl;
    
    double side1, side2, volume;         //declare variables and type
    
    ofstream outfile;    //declare var to write to a file
    outfile.open("Pyramid.txt");   //open output file to write to
    
    // C++ command to print to the screen
    cout << "ENTER TWO LINES FOR THE BASE SIDES: " ;
    
    //C++ command to read in calues and assign them names side1 and side2;
    cin >> side1 >> side2;
    
    //write variabe names/values to file called PYRxxx.out
    outfile << "Jake Messner \n\n";
    outfile << "Height is " << HEIGHT << ", base side lengths are "
            <<side1 << " and " <<side2 << ".\n";
            
            volume = side1 * side2 * HEIGHT/3.0; //calculate volume from input
    //display results to console window
    cout << "Height is" << HEIGHT << ", base side lengths are " 
        << side1 << " and " << side2 << ". .\n";
    cout << "pyramid volume is " << setprecision(6) << volume
         << " cubic cm. \n\n\n";
    outfile << "pyramid volume is " << fixed << setprecision(6) << volume
            << " cubic cm. \n\n";
         
         //start again with another set of values
         
         cout << "ENTER TWO NEW LENGTHS FOR THE BASE SIDES: ";
         cin >> side1 >> side2;
         
         outfile << "Height is " << HEIGHT << ", base side lengths are"
                 << side1 << " and " << side2 << "\n";
         
          volume = side1 * side2 * HEIGHT/3.0;
         //present the calculated values with six decimals of precision
         
         cout << "pyramid volume is " << fixed << setprecision(6) << volume
              << " cubic cm. \n\n";
         outfile << "pyramid volume is " << fixed << setprecision(6) << volume
                 << " cubic cm. \n\n";
                 system ("pause");    //console window 'wait'
               
                 return 0;
                 
    }
        
