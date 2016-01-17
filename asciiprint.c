/** Include standard I/O and string libraries */
#include <stdio.h>
#include <string.h>

/**
 * Main function to accept user input and call function
 * @param argc number of arguments
 * @param argv array of arguments being passed
 */
int main(int argc, char* argv[])
{
  /** create string for user input */
  char string1[100];
  /** prompt user to enter string */
  printf("Enter a string to have it displayed in ASCII code:\n"); 
  /** read user inputted string */
  scanf("%99s", string1);
  /** create int to use in for loop */
  int i=0;
  /** for loop to print each char in the string as an ascii string */
  for(i=0;i<strlen(string1);i++)
  {
    /** print one char at a time as an ascii string */
    printf("%d\n",string1[i]);
  }
  /** terminate program */
  return 0; 
}
