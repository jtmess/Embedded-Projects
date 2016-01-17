//** Include standard I/O library */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

/**
 * Main function to accept user input and call function
 * @param argc number of arguments
 * @param argv array of arguments being passed
 */
int main(int argc, char* argv[])
{
	/** Set up character for user input */
        char speedchar;
	/** set up integers to specify delay length */
	int delay, delaytemp, i, check;
	/** set the initial delay to 65536 (2^16) */
	delay=65536;
	/** set the initial value of check to 0 so while loop will run */
	check=0;
	/** while loop to run program until x is pressed */
	while(check==0)
	{
	  /** for loop to print Hello World 1000 times */
	  for(i=0; i<1000; i++)            
	  {
		/** print hello world to the screen */
		printf("Hello World\n");
		/** delay by delay microseconds */
		usleep(delay);		
	  }
	  /** make delay equal to variable to store temporary delay */
	  delaytemp=delay;
	  /** while loop to gather user input */
	  while(delaytemp==delay && check==0)
	  {
	    /** prompt user to enter character */
	    printf("Enter 'f' to increase speed,'s' to decrease speed, or 'x' to quit: ");
	    /** retrieve input char */
	    speedchar=getchar();
	    /** halve the delay if the input char is f */
	    if(speedchar=='f')
	    {
	  	delay=delay/2;
	    }
	    /** double the delay if the input char is s */
	    else if(speedchar=='s')
	    {
		delay=delay*2;
	    }
	    /** change check to 1 in order to exit main while loop if input char is x */
	    else if(speedchar=='x')
	    {
		check=1;
	    }
	    /** display prompt if user enters a different char */
	    else
	    {
		printf("Please enter 'f' or 's'\n");
 	    }
	}
      }
}

