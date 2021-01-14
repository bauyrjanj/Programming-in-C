#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2){  // Function accepts two parameters
    int result;
    if(num1>num2){
        result=num1;
    } else {
        result=num2;
    }
    return result;

}

int maxThree(int num1, int num2, int num3){  // Function accepts three parameters
    int result;
    if(num1>=num2 && num1>=num3){
        result=num1;
    } else if(num2>=num1 && num2>=num3){
        result=num2;
    } else {
        result=num3;
    }
    return result;

}

int main(void)
{
    printf("%d\n", max(4,10));
    printf("%d\n", maxThree(12,10,45));

}
