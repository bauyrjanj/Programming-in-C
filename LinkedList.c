#include <stdio.h>
#include <stdlib.h>

// Define a node
struct node{      // global variable, can be acccessed from anywhere
       int data;
       struct node* next;
   }; 

struct node* head; // global variable, can be acccessed from anywhere

// Insert function
void Insert(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node)); // returns the address of the memory allocated on Heap
    temp->data = x;
    if(head != NULL) temp->next = head;
    head = temp;
}
void Print(){
    struct node* temp=head;
    printf("List is: ");
    while (temp != NULL){
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(void)
{
   head = NULL; // empty list
   printf("How many numbers?\n");
   int n, x;
   scanf("%d", &n);
   for (int i=0; i<n; i++){
       printf("Enter the number: \n");
       scanf("%d", &x);
       Insert(x);
       Print();
   }

}