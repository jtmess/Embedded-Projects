
#include <stdio.h>

/* Demonstrates basic pointer use. */

main()
{
/* Declare and initialize an int variable */

   int var = 1;

/* Declare a pointer to int */

   int *ptr;

/* Initialize ptr to point to var */

   ptr = &var;

/* Access var directly and indirectly */

   printf("\nDirect access, var = %d", var);
   printf("\nIndirect access, var = %d", *ptr);

/* Display the address of var two ways */

   printf("\nThe address of var = %d", &var);
   printf("\nThe address of var = %d\n", ptr);

return 0;
}
