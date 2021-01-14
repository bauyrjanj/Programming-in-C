#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*

    NOTE: You can only use Three scanf in a single main function

    // Get integer number from the user
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your are %d old\n", age);

    // Get a decimal number from the user
    double gpa;
    printf("Enter your GPA: ");
    scanf("%lf", &gpa);
    printf("Your GPA is %f\n", gpa);
    
    // Get character from the user
    char grade;
    printf("Enter your Grade: ");
    scanf("%c", &grade);
    printf("Your Grade is %c\n", grade);
    
    // Get string from the user - scanf is only gonna grab the characters up to space so no good for a sentence with words
    char name[20];
    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Your Name is %s\n", name);
    */

    // Get a whole sentence of words from the user
    char sentence[20];
    printf("Enter a sentence: ");
    fgets(sentence, 20, stdin);
    printf("Your sentence is %s\n", sentence);

}