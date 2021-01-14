#include <stdio.h>
#include <stdlib.h>

// Let's do nested loops with 2d arrays

int main(void)
{
    int nums[3][2] = {{1, 2}, // 2 dimensional tensor
                      {3, 4},
                      {5, 6}};
    printf("%d\n", nums[0][1]);

    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%d, ", nums[i][j]);
        }
        printf("\n");
    }

    int numero[3][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}, {{9, 10}, {11, 12}}}; // 3 dimensional tensor
    printf("%d\n", numero[0][1][1]);

}