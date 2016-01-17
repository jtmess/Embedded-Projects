#include <stdio.h>
#include <string.h>
/* Simple pass by reference example */

/* Foo just sets j = 0 */
void foo(char *string) {
  strcpy(string,"Goodbye");
}

/* Call foo, passing a reference to k */
int main(void) {
  char s1[100]="Hello";
  printf("k = %s before calling foo()\n", s1);
  foo(s1);
  printf("k = %s after calling foo()\n", s1);
  /*  k now equals 0  */
}
