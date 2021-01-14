#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[] = {7, 6, 5, 4, 3, 2, 1, 0, 10};
    int n = sizeof(A)/(sizeof(A[0]));
     
    int size = sizeof(A);
    int size1 = sizeof(A[0]);
    printf("%d\n", size);
    printf("%d\n", size1);
    printf("%d\n", n);
    
    
}

