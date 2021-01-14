#include <stdio.h>
#include <stdlib.h>

// Pointers as function returns
int *Add(int *a, int *b){ // called function
    //This function returns pointer to the calling function
    int *c = malloc(sizeof(int)); // malloc is a library function that returns pointer to an address that get allocated from the Heap
    *c = (*a) + (*b); 
    return c;
}

int main(void) // calling function
{
   int x = 13, y = 28;
   int *c;
   c = Add(&x, &y);
   printf("c: %d\n", *c);
   printf("The address of c: %p\n", c);
   free(c);
   *c = 0;
   printf("c: %d\n", *c);
   printf("The address of c: %p\n", c);

}