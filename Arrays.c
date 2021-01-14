#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Using Arrays in C
    int someNumbers[]={4,6,7,4,5,6,7,87};
    
    printf("%p\n", someNumbers); // same as line below
    printf("%p\n", &someNumbers[0]); // same as line above
    printf("%p\n", someNumbers+1);
    printf("%d\n", someNumbers[0]); // same as line below
    printf("%d\n", *someNumbers); // same as line above
    printf("%d\n", *(someNumbers+1));
    
    // Modify the element in an array
    /* someNumbers[0]=100;
    printf("%d\n", someNumbers[6]);

    // Get numbers from the user
     int luckyNumbers[10];
     printf("Enter 10 numbers: ");
     scanf("%d", luckyNumbers);
     printf("%d\n", luckyNumbers[9]); */

}