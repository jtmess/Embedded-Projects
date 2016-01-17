#include <stdio.h>
int main(void)
{
 char ch = 'T';
 char *chptr = &ch;
 char name[6];
 int a = 1000;
 int *intptr = &a;
 float fnumber = 1.20000;
 float *fptr = &fnumber;
 char *ptr = "My dog has fleas!";
 printf("\n [%c],[%d],[%f],[%c],[%s]\n", *chptr, *intptr,
*fptr, *ptr, ptr);
 chptr = ptr;
 printf(\n [%c],[%s]\n, *chptr, chptr);
 name[0] = 75;
 name[1] = 97;
 name[2] = 0x65;
 name[3] = 0154;
 name[4] = 105;
 name[5] = 0;
 printf("\n [%s]\n", name);
 return 0;
}
