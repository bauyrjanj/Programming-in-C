#include <stdio.h>
#include <stdlib.h>

// Pointers are another type of data, it is basically just a memory address
int main(void)
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
    int * pAge = &age; // Assign the memory address of a variable 'age' of type int
    double * pGpa = &gpa;
    char * pGrade = &grade;
    printf("AGE's memory address: %p\n", pAge);
    age=40;
    printf("Change the value of variable AGE...\n");
    printf("AGE's memory address: %p\n", pAge);
    printf("GPA's memory address: %p\n", pGpa);
    printf("Grade's memory address: %p\n", pGrade);
    printf("Before changing the value - AGE: %d\n", age);
    
    printf("After changing the value - AGE: %d\n", age);
    printf("AGE's memory address: %p\n", pAge);
    printf("Memory address of the pointer pAge: %p\n", &pAge);
}