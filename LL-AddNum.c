#include <stdio.h>
#include <stdlib.h>

struct node{  // custom data structure for Linked List
    int num;
    struct node *next;
};

struct node *list1;
struct node *list2;
struct node *result;

void InsertList1(int digit){ // insert at the end
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->num = digit;
    temp->next = NULL;
    if (list1 !=NULL){
        temp->next = list1;
    }
    list1 = temp;
}
void InsertList2(int digit){ // insert at the end
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->num = digit;
    temp->next = NULL;
    if (list2 !=NULL){
        temp->next = list2;
    }
    list2 = temp;
}

void InsertResult(int digit){ // insert at the end
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->num = digit;
    temp->next = NULL;
    if (result !=NULL){
        temp->next = result;
    }
    result= temp;
}

void AddList(struct node *list1, struct node *list2, struct node *result){
    int sum, carry=0;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *temp2 = result;
    while(list1 !=NULL || list2 != NULL){
        sum = (list1->num) + (list2->num);
        sum = sum+carry;
        if (sum>9){
            carry = sum/10;
            sum=sum%10;
        }
        list1 = list1->next;
        list2 = list2->next;
        result->num = sum;
        result = result->next;
        }
    
    
}

void PrintNode(struct node *list){
    if (list==NULL){
        printf("The list is empty\n");
    } else{
        struct node *temp=list;
        while(temp != NULL){
            printf("The memory address: %p, The Value: %d, The Next: %p\n", temp, temp->num, temp->next);
            temp=temp->next; //Traverse the list
        }
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

    list1 = NULL;
    list2 = NULL;
    result = NULL;

// Create and link List 1
    InsertList1(3);
    InsertList1(4);
    InsertList1(2);
    PrintNode(list1);

// Create and link List 2

    InsertList2(4);
    InsertList2(6);
    InsertList2(5);
    PrintNode(list2);

// Create and link Result

    InsertResult(0);
    InsertResult(0);
    InsertResult(0);
    
// Add the lists
    AddList(list1, list2, result);
    PrintNode(result);

// Clean up the memory

    CleanUp(list1);
    CleanUp(list2);
    CleanUp(result);
    
}


