/** Include standard I/O library */
#include <stdio.h>

/**
 * Adds user-inputted int
 * @param num1 the first user-inputted int
 * @param num2 the second user-inputted int
 * @return sum of ints
 */
int add(int num1, int num2)
{
	/** Make integers to sum digits and carry if 1&1 */
	int sum,carry;
	/** set carry to 0 */
	carry=0;
	/** set sum to num1 xor num2 */
        sum=num1^num2;
	/** set carry to num1 and num2 */
	carry = num1 & num2;
	/** make temporary sum to be used in while loop */
        int tmpsum = sum;
	/** while loop to add carries */
	while(carry!=0)
	{
		/** shift carry 1 spot left */
		carry=carry<<1;
		/** set sum to sum xor carry */
		sum=sum ^ carry;
		/** set new carry to original (temporary) sum and old carry */
		carry=tmpsum & carry;
		/** set old sum to new sum */
		tmpsum = sum;
	}
	/** return sum of ints to main function */
	return sum;
}

/**
 * Subtracts user-inputted int
 * @param num1 the first user-inputted int
 * @param num2 the second user-inputted int
 * @return difference of ints
 */
int subtract(int num1, int num2)
{
        /** use add function to find tww's complement of num2 */
	int newnum2=add(~num2,1);
	/** use add function to add num1 to two's complement of num2 */
        return add(num1,newnum2);
}

/**
 * Main function to accept user input and call function
 * @param argc number of arguments
 * @param argv array of arguments being passed
 */
int main(void)
{
/** Set up character for user input */
        char operation;
        /** Set up three ints; two for user input, one to be returned */
        int i1, i2, solution;
        /** Prompt user to enter two operands i1 and i2 */
        printf("Enter two integer operands: ");
        /** Accept input of operands from console */
        scanf("%i %i", &i1, &i2);
        /** Prompt user to enter character to determine operation */
        printf("Enter + or -:");
        /** Accept input of character to determine operation */
        scanf(" %c", &operation);
        /** if statement to call add function if user inputs '+' */
        if(operation=='+')
        {
                /** use of add function to add ints */
                solution=add(i1, i2);
        }
	/** else if statement to call subtract function if user inputs '-' */
        else if(operation=='-')
        {
                /** use of subtract function to subtract ints */
                solution=subtract(i1, i2);
        }
	/** Else statement to write error if no appropriate char is read */
        else
	{
		/** print error message if int or character is incorrect */
                printf("Please enter a valid operation and valid integers");
        }
	/** print solution of operation to console */
        printf("%i%c%i=%i\n", i1, operation, i2, solution);
	printf("Solution in binary is ",solution);
	/** character to which to assign binary bits */
	char c=10;
	/** int to account for bit number */
	int a;
	/** for loop to assign and print one bit at a time */
	for(a=32;a>0;a--)
	{
		/** prints each bit in 32-bit representation and shifts left */
		printf("%d", !((c << a) & 0x20));
	}

        /** end main function */
        return 0;
}

