#include <stdio.h>
#include <stdlib.h>

// Let's learn how to export the memory address of the variables we use in C
int main(void)
{
    int age=34;
    double gpa=3.5;
    char grade = 'A';
    printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade); // when we want to print out the memory address of a variable, we use %p

}