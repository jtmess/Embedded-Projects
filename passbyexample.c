#include <stdio.h>
/* Example showing the difference in passing by value and reference */

/* predeclarations */
void swapThemByVal();
void swapThemByRef();

int main() {
      /* declare i and j */
      int i = 10, j = 20, k = 1;
 
      sortByRef(&i, &j, &k);
      printf("sorted smallest to largest: i = %d, j = %d, and k = %d \n", i, j, k);     // displays 20  10
   }
   
void sortByRef(int*  num1, int * num2, int* num3) {
      /* swaps values so they are externally visible */
      if(*num3<*num2)
	{
		int temp = *num2;
		*num2 = *num3;
		*num3 = temp;
	}
	if(*num2<*num1)
        {
                int temp = *num1;
                *num1 =	*num2;
                *num2 =	temp;
        }
   }
