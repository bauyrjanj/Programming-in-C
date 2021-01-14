#include <stdio.h>
#include <stdlib.h>

struct node{  // custome data structure for Linked List
    int age;
    struct node *next;

};

struct node *head;

void Insert(int age, int n){
    struct node *temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->age = age;
    temp1->next = NULL;
    if(n==1){
        temp1->next = head;
        head = temp1;
    } else {
        struct node *temp2 = head;
        for (int i=0; i<n-2; i++){ // Traverse through the nodes
            temp2 = temp2->next;
        }
        temp1->next = temp2->next; // Establish link between the new node and the last node
        temp2->next = temp1; // Establish link between the new node and the previous node
    }
}

void PrintNode(struct node *head){
    if (head==NULL){
        printf("The list is empty\n");
    } else{
        struct node *temp=head;
        while(temp != NULL){
            printf("The memory address: %p, The Value: %d, The Next: %p\n", temp, temp->age, temp->next);
            temp=temp->next; //Traverse the list
        }
    }
} 

void Delete(int n){
    struct node *temp = head;
    if (n==1){
        head = temp->next;
        free(temp);
    } else {
        for(int i=0; i<n-2; i++){
            temp = temp->next; // temp points to the n-1th position
            }
        struct node *temp2 = temp->next; // nth position
        temp->next = temp2->next; // n+1th node
        free(temp2);
    }
}

void CleanUp(struct node *head){
    struct node *temp;
    while(head != NULL){
        printf("Cleaning started....\n");
        temp = head->next;
        free(head);
        head = temp;
    }
}


int main(void){

    head=NULL;
    int n;
    
    Insert(32, 1);
    Insert(45, 2);
    Insert(55, 3);
    Insert(76, 4);
    Insert(82, 4);
    PrintNode(head);
    printf("Enter a position: \n");
    scanf("%d", &n);
    Delete(n);
    PrintNode(head);
    CleanUp(head);


}