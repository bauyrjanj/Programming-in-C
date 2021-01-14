#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*
    Let's create constants
    */
    
    int num=5; // Variable
    printf("%d\n", num);
    num=8; // Variable changed
    printf("%d\n", num);
    const int NUM = 5; //Make sure constants are in all caps - it is a best practice
    printf("%d\n", NUM);
    /* Below will give error because NUM is a contant and cannot be modified
    NUM = 6;
    printf("%d\n", NUM);
    */ 

}