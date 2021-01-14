#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{ // define a data structure
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(void)
{
    struct Student student1;
    student1.age = 32;
    student1.gpa = 3.2;
    strcpy(student1.name, "Bauka");
    strcpy(student1.major, "Engineering");
    printf("%f\n", student1.gpa);
    printf("%s\n", student1.name);

    
}