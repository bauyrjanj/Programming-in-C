#include <stdio.h>
#include <stdlib.h>

int Partition(int *A, int start, int end){
    int pivot = A[end];
    int pIndex = start;
    int temp;
    for(int i=start; i<end; i++){
        if(A[i] < pivot){
            temp = A[i]; // Swap if the element is smaller than pivot
            A[i] = A[pIndex];
            A[pIndex] = temp;
            pIndex++;
        }
    } 
    // Swap the element at pIndex with the element at the end
    temp = A[pIndex];
    A[pIndex] = A[end];
    A[end] = temp;
    return pIndex;
}

void Quicksort(int *A, int start, int end){
    if(start < end){
        int pIndex = Partition(A, start, end);
        Quicksort(A, start, pIndex-1); // start - pIndex
        Quicksort(A, pIndex+1, end); // pIndex - end
    }

}  
int main(void)
{
    int A[] = {7, 6, 5, 4, 3, 2, 1, 0};
    Quicksort(A, 0, 7);
    for(int i = 0; i<8; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    
}