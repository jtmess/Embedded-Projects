/*
Jake Messner and Heather Leahy
September 25, 2014
Problem #39
Amino Acids
Goal:Compute the molecular mass of amino acids
All values are measured in amu
Inputs: number of each atom
Output: molecular mass of amino acid
*/

#include <iostream> //include header file to do input and output 
#include <fstream>  //include library to read and write files
#include <iomanip>  //include library that allows formatting
using namespace std;//allow operations from standard library

int main (void){ 

 int oxygen,carbon,nitrogen,sulfur,hydrogen;  //declare input integers
 double totalweight;       
  cout<<"Heather Leahy and Jake Messner, Lab #2 Amino Acids\n"<<endl
 <<"How Many Oxygen Atoms? \n"<<endl;        //output to user prompt for numbers of atoms
 cin>>oxygen;                                //store user input as integers
  cout<<"How Many Carbon Atoms? \n"<<endl;
 cin>>carbon;
  cout<<"How Many Nitrogen Atoms? \n"<<endl;
 cin>>nitrogen;
  cout<<"How Many Sulfur Atoms? \n"<<endl;
 cin>>sulfur;
  cout<<"How Many Hydrogen Atoms? \n"<<endl;
 cin>>hydrogen;       
 totalweight=(oxygen*15.9994)+(carbon*12.011)+(nitrogen*14.00674)+(sulfur*32.066)+(hydrogen*1.00794);   //calculate molecular weight using user-inputted values
 cout<<"The Total Weight of this Amino Acid is: "<<totalweight<<" amu"<<endl;                           //display calculated weight to console 
 if ((totalweight>89.09)&&(totalweight<90)) {                                                           //Calculate name of amino acid based on molecular weight
    cout<<"This Amino Acid is Alanine \n"<<endl;                        
  }
 else if ((totalweight>89.093)&&(totalweight<89.095)) {
    cout<<"This Amino Acid is Arganine \n"<<endl;                        
  }
   else if ((totalweight>132.118)&&(totalweight<132.12)) {
    cout<<"This Amino Acid is Asparagine \n"<<endl;                        
  }
   else if ((totalweight>132.095)&&(totalweight<132.097)) {
    cout<<"This Amino Acid is Aspartic \n"<<endl;                        
  }
   else if ((totalweight>121.159)&&(totalweight<121.161)) {
    cout<<"This Amino Acid is Cycteine \n"<<endl;                        
  }
   else if ((totalweight>146.122)&&(totalweight<146.124)) {
    cout<<"This Amino Acid is Glutamic \n"<<endl;                        
  }
   else if ((totalweight>146.145)&&(totalweight<146.147)) {
    cout<<"This Amino Acid is Glutamene \n"<<endl;                        
  }
  else if ((totalweight>75.066)&&(totalweight<75.068)) {
    cout<<"This Amino Acid is Glycine \n"<<endl;                        
  }
  else if ((totalweight>156.163)&&(totalweight<156.165)) {
    cout<<"This Amino Acid is Histidine \n"<<endl;                        
  }
  else if ((totalweight>131.174)&&(totalweight<131.176)) {
    cout<<"This Amino Acid Could be Isoleucine or Leucine \n"<<endl;                        
  }
  else if ((totalweight>147.196)&&(totalweight<147.198)) {
    cout<<"This Amino Acid is Lysine \n"<<endl;                        
  }
  else if ((totalweight>149.213)&&(totalweight<149.215)) {
    cout<<"This Amino Acid is Methionine \n"<<endl;                        
  }
  else if ((totalweight>165.191)&&(totalweight<165.193)) {
    cout<<"This Amino Acid is Phenylanlanine \n"<<endl;                        
  }
  else if ((totalweight>116.139)&&(totalweight<116.141)) {
    cout<<"This Amino Acid is Proline \n"<<endl;                        
  }
  else if ((totalweight>105.093)&&(totalweight<105.095)) {
    cout<<"This Amino Acid is Serine \n"<<endl;                        
  }
  else if ((totalweight>119.119)&&(totalweight<119.121)) {
    cout<<"This Amino Acid is Threonine \n"<<endl;                        
  }
  else if ((totalweight>203.22)&&(totalweight<203.222)) {
    cout<<"This Amino Acid is Tryptophan \n"<<endl;                        
  }
  else if ((totalweight>181.19)&&(totalweight<181.192)) {
    cout<<"This Amino Acid is Tyrosine \n"<<endl;                        
  }
  else if ((totalweight>117.147)&&(totalweight<117.149)) {
    cout<<"This Amino Acid is Valine \n"<<endl;                        
  }
  else {
      
      cout<<"This Amino Acid is Nonexistant or not Commonly Found \n"<<endl;
  }
 system("pause");
 return 0;       
}
