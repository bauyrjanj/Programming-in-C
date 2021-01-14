#include <stdio.h>
#include <stdlib.h>

// Let's closely look at Pointers and Addresses

int main(void)
{
    int x=1, y=2, z[10];
    printf("The value of x: %d\n", x);
    printf("The value of y: %d\n", y);
    int *ip;
    ip = &x; 
    printf("The value the pointer points to: %d\n", *ip);
    printf("The memory address the pointer points to: %p\n", ip);
    y = *ip;
    printf("The value of y: %d\n", y);
    *ip=0;
    printf("The value the pointer points to: %d\n", *ip);
    printf("The memory address the pointer points to: %p\n", ip);
    *ip = 32;
    printf("The value the pointer points to: %d\n", *ip);
    printf("The memory address the pointer points to: %p\n", ip);
    ip = &z[0];
    printf("The value the pointer points to: %d\n", *ip);
    printf("The memory address the pointer points to: %p\n", ip);
    printf(" z[0] is: %d\n", z[0]);
    printf(" z[1] is: %d\n", z[1]);
    *ip = *ip+10;
    printf("The value the pointer points to: %d\n", *ip);
    printf("The memory address the pointer points to: %p\n", ip);
    *ip += 1;
    printf("The value the pointer points to: %d\n", *ip);
    printf("The memory address the pointer points to: %p\n", ip);
     ++*ip;
    printf("The value the pointer points to: %d\n", *ip);
    printf("The memory address the pointer points to: %p\n", ip);
    (ip)++;
    printf("The value the pointer points to: %d\n", *ip);
    printf("The memory address the pointer points to: %p\n", ip);
    int *iq;
    iq = ip;
    printf("The value of iq: %p\n", iq);


}