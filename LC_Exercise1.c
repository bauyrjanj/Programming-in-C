#include <stdio.h>
#include <stdlib.h>


struct Num1 { // global variable
    int data;
    struct Num1* next;
};

struct Num1 *head;

struct Num2 { //global variable
    int data;
    struct Num2* next;
};

void printList(struct Num1* n){
    while (n != NULL){
        printf("%d\n", n->data);
        n=n->next;
    }
}

int AddNumbers(struct Num1* n1, struct Num2* n2){
    int result;
    while (n1 != NULL){
        result = n1->data+n2->data;
        n1 = n1->next;
        n2 = n2->next;
    }
    return result;
}

int main(void)
{
    
    struct Num1* Num1Head = NULL; // 1st number, aka head
    struct Num1* Num1Second = NULL; //2nd number
    struct Num1* Num1Third = NULL; // 3rd number

    struct Num2* Num2Head = NULL; // 1st numberm aka head
    struct Num2* Num2Second = NULL; // 
    struct Num2* Num2Third = NULL;
    
    // Allocate 3 nodes 
    Num1Head = (struct Num1*)malloc(sizeof(struct Num1));
    Num1Second = (struct Num1*)malloc(sizeof(struct Num1));
    Num1Third = (struct Num1*)malloc(sizeof(struct Num1));
    
    Num1Head->data = 2;
    Num1Head->next = Num1Second; //Link first node with the second node

    Num1Second->data = 3;
    Num1Second->next = Num1Third;

    Num1Third->data = 4;
    Num1Third->next = NULL;

    // Allocate 3 nodes 
    Num2Head = (struct Num2*)malloc(sizeof(struct Num2));
    Num2Second = (struct Num2*)malloc(sizeof(struct Num2));
    Num2Third = (struct Num2*)malloc(sizeof(struct Num2));
    
    Num2Head->data = 9;
    Num2Head->next = Num2Second; //Link first node with the second node

    Num2Second->data = 2;
    Num2Second->next = Num2Third;

    Num2Third->data = 8;
    Num2Third->next = NULL;

    printList(Num1Head);
    printf("%d\n", AddNumbers(Num1Head, Num2Head));

}