#include <stdio.h>
#include <stdlib.h>

// Let's learn how to create a Linked List (not linked yet)

struct sPerson{ // new list structure named "sPerson"
    int age;
};

struct sPerson *InsertNewPerson(int age){
    struct sPerson *newPerson =NULL; // create a new Pointer of type "struct sPerson" to point to sPerson structure
    newPerson = (struct sPerson*)malloc(sizeof(struct sPerson)); // Allocate memory where we can write our data (age)
    newPerson->age = age; // Assign value to the data portion which is "age" in this example
    printf("created new person at %p\n", newPerson); // Print the memory address to the standard output
    return newPerson;
}

void printPerson(struct sPerson *person, char *comment){
    if(person==NULL){
        printf("%s is NULL\n", comment);
    } 
    else {
        printf("%s, age: %d, address: %p\n", comment, person->age, person);
    }
}

int main(void){
   struct sPerson *first = NULL; // declare a new pointer of type "struct sPerson"
   struct sPerson *second = NULL;

   printPerson(first, "first");
   printPerson(second, "second");

   first = InsertNewPerson(45);
   second = InsertNewPerson(67);
   
   printPerson(first, "first");
   printPerson(second, "second");

   free(first); // Free up the memory
   free(second); // Free up the memory

   first = NULL; // set to NULL so its not pointing to anywhere
   second = NULL;

}