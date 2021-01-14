#include <stdio.h>
#include <stdlib.h>

// Let's learn how to retrive the information stored in memory addresses, this is called dereferencing pointers
int main(void)
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
    int * pAge = &age; // Assign the memory address of a variable 'age' of type int
    double * pGpa = &gpa;
    char * pGrade = &grade;
    printf("AGE: %d\n", *pAge);
    printf("GPA: %f\n", *pGpa);
    printf("Grade: %c\n", *pGrade);

}