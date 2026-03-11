#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *start = NULL, *newnode, *ptr;

void insert(){
    newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL){
        printf("No Memory Available in linklist");
        return;
    }

    printf("Enter value to insert at Last = ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if(start == NULL){
        start = newnode;
    } else{
        ptr = start;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = newnode;
    }
    printf("Insert Successfull");
}

void delete(){
    ptr=start;

    if(start == NULL){
        printf("linklist is empty");
    } else if(ptr->next == NULL){
        start = NULL;
    } else{
        while(ptr->next->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = NULL;
        printf("Delete Successfull");
    }
}

void display(){
    if(start == NULL){
        printf("linklist is empty");
    } else{
        ptr = start;
        while (ptr != NULL){
            printf("%d | ", ptr->data);
            ptr = ptr->next;
        }
    }
}
int main(){
    int ch;

    do{
        printf("\n1.insert\n2.delete\n3.display\n4.exit");
        printf("\nEnter your choice");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Thank you for using me....\n");
            return 0;
        default:
            break;
        }
    }while(ch!=0);
    return 0;
}