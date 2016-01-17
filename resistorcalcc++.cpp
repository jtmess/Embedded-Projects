
#include <iostream> 
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main (void) {
	
	double resistance, req;
	int numberofresistors, countint;
	
	cout<<"Enter the number of resistors in the citcuit \n";
	cin>>numberofresistors;
	
	countint = 1;
	cout<<"Enter the Value of resistor 1: ";
	cin>>resistance;
	req=resistance;
	
	while (countint<numberofresistors) {
		
		countint++;
		cout<<"Enter the value of resistor "<<countint<<": ";
		cin>>resistance;
		req = (req*resistance)/(req+resistance);
		
	}
	cout<<"The total resistance of the circuit is "<<req<<" Ohms";
	
	system("pause");
	return 0;
	
}
