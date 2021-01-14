#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int increasing_order(int a, int b){
    if (a>b) return 1;
    else return -1;
}

int decreasing_order(int a, int b){
    if (a>b) return -1;
    else return 1;
}

int abs_increasing(int a, int b){
    if (abs(a) > abs(b)) return 1;
    else return -1;
}

int compare(const void *a, const void *b){
    int A = *((int*)a); //typecasting the pointer and de-referencing
    int B = *((int*)b); //typecasting the pointer and de-referencing
    return a-b;
}


void BubbleSort(int *A, int n, int (*compare)(int, int)){ // function pointer compare is passed to function as argument
    int temp;
    for (int i=0; i<n; i++){ // number of passes, number of elements in the array
        for (int j=0; j<n-1; j++){
            if (compare(A[j], A[j+1]) > 0){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

}

int main(void)
{
    int a[] = {3, 2, 1, 5, 6, 4};
    int b[] = {-4, 2, 34, -54, 23, -9};
    BubbleSort(a, 6, increasing_order); // increasing_order is a callback function
    BubbleSort(b, 6, abs_increasing); //abs_increasing is a callback function
    for (int i=0; i<6; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    for (int i=0; i<6; i++){
        printf("%d ", b[i]);
    }
    printf("\n");

    qsort(a, 6, sizeof(int), compare); //compare is a callback function

}