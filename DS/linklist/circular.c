#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *start;

void insert(){
    struct node *newNode, *ptr;
    newNode = (struct node *)malloc(sizeof(struct node));

    int value;
    printf("Enter value to insert = ");
    scanf("%d", &value);

    newNode->data = value;
    newNode->next = NULL;

    if(start == NULL){
        start = newNode;
        newNode->next = start;
    }
    else{
        ptr = start;
        while(ptr->next != start){
            ptr = ptr->next;
        }
        ptr->next = newNode;
        newNode->next = start;
    }
}

void insertAt(){
    int pos,value;
    printf("Enter position to insert number = ");
    scanf("%d", &pos);
    printf("Enter value to store");
    scanf("%d",&value);

    struct node *newNode, *ptr;

}

void display(){
    struct node *ptr;
    ptr = start;

    if(start==NULL){
        printf("List is Empty");
    }else{
        do{
            printf("\t%d |", ptr->data);
            ptr = ptr->next;
        }while(ptr != start);
    }
}

void delete(){
    struct node *ptr, *prev;

    if(start == NULL){
        printf("List is Empty");
        return;
    }
    if(start->next == start){
        start = NULL;
        return;
    }
    ptr = start;
    while(ptr->next != start){
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = start;
    free(ptr);
}

void deleteAt(){
   
}

void count(){
   
}

void search(){
    
}

void deleteEnd(){
    
}

int main(){
    int ch=0;
    start=NULL;
    
    do{
        printf("\n============ M A N U ==============");
        printf("\n1. Insert");
        printf("\n2. Display");
        printf("\n3. Delete Last Element");
        printf("\n4. Delete At");
        printf("\n5. Insert At");
        printf("\n6. Count Element");
        printf("\n7. Search Element");
        printf("\n10. Exit");
        printf("\nEnter ch = ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                delete();
                break;
            case 4:
                deleteAt();
                break;
            case 5:
                insertAt();
                break;
            case 6:
                count();
                break;
            case 7:
                search();
                break;
            case 8:
                deleteEnd();
                break;
            case 10:
                break;
            default:
                printf("Enter valid choice");
                break;
        }
    }while(ch!=0);
    return 0;
}