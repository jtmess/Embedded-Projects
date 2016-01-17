/** Include standard I/O library */
#include <stdio.h>
/** Include string library */
#include <string.h>

/**
 * Function to compare strings
 * @param first string to be compared
 * @param second string to be compared
 * @return 1 if strings are the same, 0 if they are not
 */
int returnstrings(char firststring[100], char secondstring[100])
{
        /** if statement to check whether strings are the same */
        if(strcmp(firststring,secondstring)==0)
        {
                /** return 1 if strings are the same */
                return 1;
        }
	else
	{
                /** return 0 if strings are different */
                return 0;
        }
}

/**
 * Function to return string shorter in length 
 * @param first string to be compared 
 * @param second string to be compared
 * @return shorter string
 */
char* returnshorterstring(char firststring[], char secondstring[])
{
	/** if statement to compare strlen of first string to that of second */
        if(strlen(firststring)>strlen(secondstring))
        {
		/** return the second string if it is shorter than the first */
                return secondstring;
        }
	/** else if statement to compare strlen of second string to that of first */
	else if(strlen(secondstring)>strlen(firststring))
	{
		/** return the first string if it is shorter than the second */
		return firststring;
	}
	/** else statement to return message if strings are equal in length */
	else
	{
		return "The Strings are equal in length";
	}
}

/**
 * Main function to accept user input and call function
 * @param argc number of arguments
 * @param argv array of arguments being passed
 */
int main(int argc, char* argv[])
{
	/** integer to set to 1 if strings are equal */
	int equal;
	/** create two strings for user input */ 
	char string1[100], string2[100];
	/** prompt user to enter the first string */
	printf("Enter the first string: \n");
	/** read user input of first string */
   	scanf("%s",string1);
	/** prompt user to enter second string */
   	printf("Enter the second string: \n");
	/** read user input of second string */
   	scanf("%s",string2);
	/** run equal function to determine whether two strings are the same */
	equal=returnstrings(string1, string2);
	/* print 1 i strings are the same and 0 if they are different */
	if(equal==0)
	{
	  printf("The first string is shorter.");
	}
	else{
	  printf("The second string is shorter.");	
	}
	/** print the shorter string or a message if the strings are the same length */
	printf("The shorter string is %s \n", returnshorterstring(string1, string2));
}
