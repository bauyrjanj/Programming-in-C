#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sayHi(){
    printf("Hello Users!\n");
}

void sayHiTo(char name[]){
    printf("Hello %s\n", name);

}

void Info(char name[], int age){
    printf("Hello %s and you are %d years old\n", name, age);
}

int cubeNum(int num); //prototype a function that is declared below the main function

int main(void)
{
    sayHi();
    sayHiTo("Bauka");
    Info("Janka", 32);
    int k = cubeNum(3);
    printf("The returned number is %d\n", k);

}

int cubeNum(int num){
    return pow(num, 3);
}