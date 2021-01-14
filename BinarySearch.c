#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int BinarySearch(int *A, int n, int x){ /* Takes sorted array as an input - 
if the input array is not sorted, then make sure to sort it with Bubble sort first */
    
    // define start and end
    int start=0, end = n-1, mid;
    
    // Logic will stop either when exhausted the search space or when the element being seached is found
    while (start<=end){
        mid = (end + start)/2;
        if (A[mid]==x) return mid; // The element being seached is found
        else if (x > A[mid]) start=mid+1;
        else end = mid-1;
        }
        return -1;
    }

int main(void)
{
    int a[] = {10, 14, 18, 23, 34, 45, 67};
    int k = BinarySearch(a, 7, 45);
    printf("%d\n", k);
    

}