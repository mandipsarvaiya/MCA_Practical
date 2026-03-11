#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front;
struct node *rear;

void enqueue(){
    struct node *newNode, *ptr;
    newNode = (struct node *)malloc(sizeof(struct node));

    if(newNode==NULL){
        printf("memory is full");
    }

    printf("\nInput value = ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if (front == NULL){
        front = newNode;
        rear = newNode;
    } else{
        ptr = front;
        while (ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    printf("Enqueue successfull");
}

void dequeue(){
    if(front == NULL){
        printf("Queue is Empty");
        return;
    }

    front = front->next;
    printf("dequeue successfull");
    
}

void peek(){
    if(front==NULL){
        printf("Queue is Empty");
        return;
    }
    printf("Peek element is = %d", front->data);
}

void display(){
    struct node *ptr;
    if(front==NULL){
        printf("Queue is Empty");
        return;
    }
    ptr = front;
    while (ptr != NULL){
        printf("%d | ", ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    int ch;
    do{
        printf("\n0. Exit \n1. insert element\n2. deletion element\n3. peek\n4. Display element");
        printf("\nEnter your choice = ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 0:
                break;
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4: 
                display();
                break;
            default:
                break;
        }
    }while(ch!=0);
    return 0;
}