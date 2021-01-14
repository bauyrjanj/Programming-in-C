#include <stdio.h>
#include <stdlib.h>


void Merge(int *L, int *R, int *A, int nl, int nr){
    int i, j, k;
    i=j=k=0;
    while(i<nl && j<nr){
        if(L[i]<=R[j]){
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<nl){
        A[k] = L[i];
        i++;
        k++;
    }
    while(j<nr){
        A[k] = R[j];
        k++;
        j++;
    }
}
void MergeSort(int *A, int n){
    int mid = n/2;
    int nl = mid;
    int nr = n-mid;
    int L[nl];
    int R[nr];
    if (n<2){
        return;
    } else {
        for(int i=0; i<mid-1;i++){
            L[i] = A[i];
        }
        for(int j=mid; j<n-1; j++){
            R[j-mid] = A[j];
        }
    }
    MergeSort(L, nl);
    MergeSort(R, nr);
    Merge(L, R, A, nl, nr);
}

int main(void)
{
    int A[] = {7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(A)/(sizeof(A[0]));
    MergeSort(A, n);
    for(int i = 0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    
}