#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *start = NULL, *newnode, *ptr, *temp;
void create(){
    if(start != NULL){
        printf("\nList already created");
        return;
    }

    int data;
    newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL){
        printf("\nOverflow");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &data);

    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;

    start = newnode;
}

void insertstart(){
    int data;
    newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL){
        printf("\nOverflow");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &data);

    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = start;

    if(start != NULL)
        start->prev = newnode;

    start = newnode;
}

void insertend(){
    int data;
    newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL){
        printf("\nOverflow");
        return;
    }

    printf("Enter data: ");
    scanf("%d", &data);

    newnode->data = data;
    newnode->next = NULL;

    if(start == NULL){
        newnode->prev = NULL;
        start = newnode;
    }
    else{
        ptr = start;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = newnode;
        newnode->prev = ptr;
    }
}

void deletestart(){
    if(start == NULL){
        printf("\nUnderflow");
    }
    if(start->next==NULL){
        start=NULL;
    } else{
        temp = start;
        start = start->next;
        start->prev = NULL;
    }
}

void deleteend(){
    if(start == NULL){
        printf("\nUnderflow");
    } 
    if(start->next==NULL){
        start=NULL;
    } else {
        ptr = start;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->prev->next = NULL;
    }
}

void display(){
    if(start == NULL){
        printf("\nList is empty");
        return;
    }
    ptr = start;

    printf("\nForward: ");
    while(ptr->next != NULL){
        printf("%d | ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);   // print last node

    printf("\nBackward: ");
    while(ptr != NULL){
        printf("%d | ", ptr->data);
        ptr = ptr->prev;
    }
}

void insertAt(){
    int data, value;

    newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL){
        printf("overflow");
        return;
    }
    
    printf("enter data");
    scanf("%d", &newnode->data);
    printf("enter before value");
    scanf("%d", &value);

    ptr = start;
    while(ptr->data != value && ptr!=NULL){
        ptr = ptr->next;
    }
    newnode->next = ptr->next;
    newnode->prev = ptr;
    ptr->next->prev = newnode;
    ptr->next = newnode;

    printf("element inserted");
}

int main(){
    int choice;

    do{
        printf("\n1.Create");
        printf("\n2.Insert Start");
        printf("\n3.Insert End");
        printf("\n4.Delete Start");
        printf("\n5.Delete End");
        printf("\n6.Display");
        printf("\n0.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: create(); break;
            case 2: insertstart(); break;
            case 3: insertend(); break;
            case 4: deletestart(); break;
            case 5: deleteend(); break;
            case 6: display(); break;
            case 7: insertAt();
            case 0: printf("\nExiting..."); break;
            default: printf("\nInvalid choice");
        }

    }while(choice != 0);

    return 0;
}
