#include <stdio.h>
#include <stdlib.h>

// Pointers that point to functions, aka function pointers
int Add(int a, int b){ // called function
    //This function returns an integer value
    return a+b;
}

void PrintHello(){
    printf("Hello\n");
}

int main(void) // caller function
{
   int c;
   int (*p)(int, int); // create a pointer that points to the address of a user-defined function "Add"
   p = &Add; // get the address of the function "Add"
   // p = Add - this would also work just fine as above syntax
   // c = (*p)(2,3); //de-referencing and executing the function the pointer *p is pointing to
   c = p(6,3); // this would also work just fine as above syntax
   printf("%d\n",c);
   void (*ptr)();
   ptr = PrintHello;
   ptr();
}