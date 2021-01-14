#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Using Heap segment of the RAM is referred to as Dynamic Memory Allocation
// To use dynamic memory in C, we need to know about 4 main functions that are malloc, calloc, realloc and free.

int main(void)
{
    /* int a; // this variable is stored in Stack
    int *p; 
    p = (int*)malloc(sizeof(int)); // malloc reserves memory space on Heap.
                                  // malloc returns a void pointer by default so it will need to be typecasted to whatever type you need
    *p = 10; // Writes the value/data to the reserved memory space on Heap
    printf("The memory address allocated from Heap is: %p\n", p);
    free(p); // Best practice is to deallocate the Heap memory after done using it by using the free function
    *p = 20; // Why am I still able to write to the Heap memory that was deallocated by free???
    printf("The memory address allocated from Heap is: %p\n", p);
    printf("The value in Heap is: %d\n", *p);

    // Let's reserve a memory space on Heap for 3 integers and assign values
    int *ptr = (int*)malloc(3*sizeof(int)); // reserve a space for 3 integers on Heap and typecast the returned void pointer to integer
    *ptr = 2; // Assign the 1st integer in the starting address
    *(ptr+1) = 3; //Assign the 2nd integer to the second block of address
    *(ptr+2) = 5; //Assign the 3rd integer to the third block of address
    printf("1st block of address: %p, the value stored: %d\n", ptr, *ptr);
    printf("2nd block of address: %p, the value stored: %d\n", ptr+1, *(ptr+1));
    printf("3rd block of address: %p, the value stored: %d\n", ptr+2, *(ptr+2));

    // Calloc also returns void pointer and takes two arguments, it initializes the values at the allocated memory addresses to zero

    int n;
    printf("Enter the size of array: "); // get the size of the array from standard input
    scanf("%d", &n);

    int B[n]; // Can also be implemented without using pointers and malloc
    for (int i=0; i<n; i++){
        B[i] = (i+1)*2;
        printf("%d ", B[i]);
    }
    printf("\n"); 

    int *A = (int*)calloc(n, sizeof(int)); // Allocate memory space on Heap
    for (int i=0; i<n; i++){  // Calloc initializes the elements of array to Zero if values were not explicitly assigned
        printf("%d ", A[i]);
    }
    printf("\n");
    free(A);*/ 

    int n;
    printf("Enter the size of array: "); // get the size of the array from standard input
    scanf("%d", &n);

    // Implement above example with calloc
    int *C = (int*)malloc(n * sizeof(int)); // Allocate memory space on Heap
    for (int i=0; i<n; i++){  
        printf("%d ", *(C+i));
    }
    printf("\n");
    free(C);
    // Realloc also returns void pointer and take two arguments. Realloc is used to readjust the size of memory space previously allocated
    int *D = (int*)realloc(C, 2*n*sizeof(int)); // Extend the memory block previously allocated for C by twice, it will pass the values already stored in C as well
    printf(" Prev block address: %p, New block address: %p\n", C, D);
    for (int i=0; i<2*n; i++){
        printf("%d\n", D[i]);
    }


    
}