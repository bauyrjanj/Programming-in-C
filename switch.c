#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    char grade = 'D';

    switch(grade){
        case 'A': 
            printf("You are awesome!\n");
            break;
        case 'B':
            printf("You did well!\n");
            break;
        case 'C':
            printf("Work Harder!\n");
            break;
        case 'F':
            printf("You failed!\n");
            break;
        default :
            printf("Invalid grade!\n");
    }

}