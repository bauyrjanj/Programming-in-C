#include <stdio.h>
#include <stdlib.h>

// Let's closely look at Pointer Arithmetic, Void Pointers and Pointer Types

int main(void)
{
    // Let's look at the addresses of negative and positive numbers
    int a=900, b=-123, *pPos, *pNeg;
    pPos = &a;
    pNeg = &b;
    printf("The memory address of a: %p\n", pPos);
    printf("The size of the value the pPos points to is %lu bytes\n", sizeof(*pPos));
    printf("The memory address of b: %p\n", pNeg);

    // Let's take a look at the concept of "Typecasting"
    /* Below type of assignment gives error
    char * pChar;
    pChar = pPos;
    printf("The value of pChar: %d\n", *pChar);
    */
   char * pChar;
   pChar = (char *) pPos; //typecasting
   printf("The value of pChar: %d\n", *pChar);
   printf("The size of the value the pChar points to is %lu bytes\n", sizeof(*pChar));
   printf("The memory address the pChar points to: %p\n", pChar);
   (*pChar)++;
   printf("The value of pChar: %d\n", *pChar);
   printf("The size of the value the pChar points to is %lu bytes\n", sizeof(*pChar));
   printf("The memory address the pChar points to: %p\n", pChar);

    // Let's see the Pointer arithmetic in action - adding and subtracting a constant integer value is the only operation you can do with pointers
    
    int *pInt;
    int d=123;
    pInt = &d;
    printf("The address of p = %p, The value the p points to = %d\n", pInt, *pInt);
    for (int i=0; i<5; i++){
        pInt++;
        printf("The address of pInt+1= %p, The value the pInt+1 points to = %d\n", pInt, *pInt);

    }
    
    char *p;
    char c='c';
    p = &c;
    printf("The address of p = %p, The value the p points to = %c\n", p, *p);
    for (int i=0; i<5; i++){
        p++;
        printf("The address of p+1=%p, The value the p+1 points to = %c\n", p, *p);

    }
    
    // Void pointers - the use cases of void pointers will be revisited later
    void *pVoid;
    pVoid = p;
    printf("The Address the pVoid points to: %p\n", pVoid);
    // printf("The Address the pVoid points to: %c\n", *pVoid); - this will give you an error, can't print the value the void pointer points to
   

}