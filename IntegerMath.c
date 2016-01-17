/** Include standard I/O library */
#include <stdio.h>

/** 
 * Adds user-inputted doubles
 * @param num1 the first user-inputted double
 * @param num2 the second user-inputted double
 * @return sum of doubles
 */
double add(double num1, double num2)
{
	/** return sum of two doubles */
	return num1+num2;
}
/**                                                 
 * Subtracts user-inputted doubles
 * @param num1 the first user-inputted double
 * @param num2 the second user-inputted	double
 * @return difference of doubles
 */
double subtract(double num1, double num2)
{
	/** return difference of two doubles */
	return num1-num2;
}
/**                                                 
 * Multiplies user-inputted doubles
 * @param num1 the first user-inputted double
 * @param num2 the second user-inputted	double
 * @return product of doubles
 */
double multiply(double num1, double num2)
{
	/** return product of two doubles */
	return num1*num2;
}
/**                                                 
 * Divides user-inputted doubles
 * @param num1 the first user-inputted double
 * @param num2 the second user-inputted	double
 * @return quotient of doubles
 */
double divide(double num1, double num2)
{
	/** return quotient of two doubles */
	return num1/num2;
}
/**
 * Main function to accept user input and call function
 * @param argc number of arguments
 * @param argv array of arguments being passed
 */
int main(int argc, char* argv[])
{
	/** Set up character for user input */
        char operation;
	/** Set up three doubles; two for user input, one to be returned */
        double i1, i2, solution;
	/** Prompt user to enter two operands i1 and i2 */
        printf("Enter two operands: ");
	/** Accept input of operands from console */
        scanf("%lf %lf", &i1, &i2);
	/** Prompt user to enter character to determine operation */
        printf("Enter operation (+,-,*,or/):");
	/** Accept input of character to determine operation */
        scanf(" %c", &operation);
	/** if statement to call add function if user inputs '+' */
        if(operation=='+')
        {
		/** use of add function to add doubles */
                solution=add(i1, i2);
        }
	/** else if statement to call subtract function if user inputs '-' */
	else if(operation=='-')
        {
		/** use of subtract function to subtract doubles */	
                solution=subtract(i1, i2);
        }
	/** else if statement to call multiply function if user inputs '*' */ 
	else if(operation=='*')
        {
		/** use of multiply function to multiply doubles */
                solution=multiply(i1, i2);
        }
	/** else if statement to call divide function if user inputs '/' */
	else if(operation=='/')
        {
		/** use of divide function to divide doubles */
		if(i2!=0)
		{
                	solution=divide(i1, i2);
		}
		else
		{
		        printf("Divide By Zero Error");
		}
	}
	/** Else statement to write error if no appropriate char is read */
	else
	{
                printf("Please enter a valid operation and valid integers");
        }
	/** print solution of operation to console */
	printf("%f%c%f=%f", i1, operation, i2, solution);
	/** end main function */
        return 0;
}
