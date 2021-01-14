#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Let's make dynamic list from user input

struct sPerson{ // new list structure named "sPerson"
    int age;
    struct sPerson *next; // Add sPerson Pointer which will be used to point to the next list
};

struct sPerson *NewPerson(int age){ // Function that creates new block (pair of data and next)
    struct sPerson *newPerson =NULL; // create a new Pointer of type "struct sPerson" to point to sPerson structure
    newPerson = (struct sPerson*)malloc(sizeof(struct sPerson)); // Allocate memory where we can write our data (age)
    if (newPerson != NULL){ // Check if the memory was allocated successfully
        newPerson->next = NULL;
        newPerson->age = age; // Assign value to the data portion which is "age" in this example
        printf("created new person at %p\n", newPerson); // Print the memory address to the standard output

    } else {
        printf("Memory Allocation Failure...!\n");
    }
    
    return newPerson;
}

void printPerson(struct sPerson *person, char *comment){ // Function that prints a single element
    if(person==NULL){
        printf("%s is NULL\n", comment);
    } 
    else {
        printf("%s, age: %d, address: %p, next in line: %p\n", comment, person->age, person, person->next);
    }
}

void PrintList(struct sPerson *list){ // Traversing through the list
    printf("Printing Lst:\n");
    struct sPerson *t;
    t = list;
    if(t == NULL){
        printf("List is empty\n");
    } else {
        while(t !=NULL){
            printPerson(t, "t");
            t = t->next;
        }
    }
}

void CleanUp(struct sPerson *first){ // Free up each and every address allocated by malloc
    struct sPerson *temp;
    while(first !=NULL){
        temp = first->next;
        printf("Cleaning %d\n", first->age);
        free(first);
        first = temp;
    }

}

int main(void){
   struct sPerson *first = NULL; // declare a new pointer of type "struct sPerson"
   struct sPerson *added = NULL;
   char command[64];
   int age;
   while(1){
       printf("Enter a command or value: ");
       fgets(command, 64, stdin); // get the whole sentence from standard input
       
       if(strcmp("q\n", command)==0)
       { //strcmp returns zero if strings on each side of comma match
           printf("Quitting...\n");
           break;
       } 
       else if(strcmp("print\n", command)==0)
       {
           printf("Printing...\n");
           PrintList(first);
           
       }
       else if(sscanf(command, "%d", &age) != 0) //sscanf returns non-zero if everything worked OK
       {
           printf("Adding %d\n", age);
           if (first == NULL){
               first = NewPerson(age);
               if(first !=NULL){
                   added = first;
               }
           } else { // Linking
               added->next = NewPerson(age);
               if(added->next !=NULL){
                   added = added->next;
               }
           }
           
       }
   }
   CleanUp(first);

   first = NULL;
   added = NULL;
   

}