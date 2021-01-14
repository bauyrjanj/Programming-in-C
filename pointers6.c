#include <stdio.h>
#include <stdlib.h>

// Let's closely look at pointers to pointers
int main(void)
{
   int x = 5;
   printf("The value of x: %d\n", x);
   printf("The memory address of x: %p\n", &x);
   int *p = &x;
   printf("Change the value of *p\n");
   *p = 6;
   printf("The value of x: %d\n", x);
   printf("The memory address of x: %p\n", &x);
   printf("The value of x: %d\n", *p);
   printf("The memory address the *p points to: %p\n", p);
   int **q = &p;
   printf("The memory address of the pointer *p: %p\n", &p);
   printf("The address the q points to: %p, The value of q: %p, The value of the pointer q pointes to: %d\n", q, *q, **q);
   int ***r = &q;
   printf("The memory address of the pointer **q: %p\n", &q);
   printf("The address the r points to: %p, The value of r: %p, The value of the pointer q pointes to: %d\n", r, **r, ***r);
   ***r = 10;
   printf("The value of x: %d\n", x);
   printf("The dereferecing by *p: %d\n", *p);
   **q = *p+2;
   printf("The value of x: %d\n", x);
   printf("The dereferecing by *p: %d\n", *p);
   printf("The dereferecing by **q: %d\n", **q);

   


}