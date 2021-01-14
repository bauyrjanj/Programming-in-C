#include <stdio.h>
#include <stdlib.h>

// Pointers are function arguments, also known as "Call by reference"

void swap(int x, int y){ // Called function

    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Memory address of x: %p\n", &x);
    printf("Memory address of y: %p\n", &y);
}

void pSwap(int *x, int *y){
    printf("Memory address of x: %p\n", x);
    printf("Memory address of y: %p\n", y);
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    
} 

int main(void) // Calling function
{
     int a=3, b=4;
     printf("The memory address of a: %p\n", &a);
     printf("The memory address of b: %p\n", &b);
     swap(a, b);
     printf("a: %d, b: %d\n", a, b);
     pSwap(&a, &b);
     printf("The memory address of a: %p\n", &a);
     printf("The memory address of b: %p\n", &b);
     printf("a: %d, b: %d\n", a, b);
    

}