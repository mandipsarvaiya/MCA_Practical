#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *start1;
struct node *start2;

void insert1(){
    struct node *newNode, *ptr;
    newNode = (struct node *)malloc(sizeof(struct node));

    int value;
    printf("Enter value to insert = ");
    scanf("%d", &value);

    newNode->data = value;
    newNode->next = NULL;

    if(start1 == NULL){
        start1 = newNode;
        newNode->next = start1;
    } 
    else{
        ptr = start1;
        while(ptr->next != start1){
            ptr = ptr->next;
        }
        ptr->next = newNode;
        newNode->next = start1;
    }
}

void display1(){
    struct node *ptr;
    ptr = start1;

    if(start1==NULL){
        printf("List is Empty");
    }else{
        do{
            printf("\t%d |", ptr->data);
            ptr = ptr->next;
        }while(ptr != start1);
    }
}

void insert2(){
    struct node *newNode, *ptr;
    newNode = (struct node *)malloc(sizeof(struct node));

    int value;
    printf("Enter value to insert = ");
    scanf("%d", &value);

    newNode->data = value;
    newNode->next = NULL;

    if(start2 == NULL){
        start2 = newNode;
        newNode->next = start2;
    }else{
        ptr = start2;
        while(ptr->next != start2){
            ptr = ptr->next;
        }
        ptr->next = newNode;
        newNode->next = start2;
    }
}

void display2(){
    struct node *ptr;
    ptr = start2;

    if(start2==NULL){
        printf("List is Empty");
    }else{
        do{
            printf("\t%d |", ptr->data);
            ptr = ptr->next;
        }while(ptr != start2);
    }
}

void intersect(){
    struct node *ptr1, *ptr2;
    ptr1 = start1;

    if(start2==NULL || start1 == NULL){
        printf("List 1 or list 2 is Empty");
    }else{
        ptr1 = start1;
        do{
            ptr2 = start2;
            do{
                if(ptr1->data == ptr2->data){
                    printf("\t| %d | ", ptr1->data);
                    break;
                }
                ptr2 = ptr2->next;
            }while(ptr2 != start2);
            ptr1 = ptr1->next;
        }while(ptr1 != start1);
    }
}

void unionlist(){
    struct node *ptr1, *ptr2, *temp;
    int found = 0;
    if(start1 == NULL || start2 == NULL){
        printf("list 1 or list 2 is empty");
        return;
    }
    //print all element from list 1 
    ptr1=start1;
    do{
        printf("| %d \t",ptr1->data);
        ptr1=ptr1->next;
    }while(ptr1!=start1);
    //print those element which is in list 2 but not in list 1
    ptr1=start1;
    ptr2=start2;
    do{
        found = 0;
        temp = start1;
        do{
            if(temp->data == ptr2->data){
                found = 1;
                break;
            }
            temp = temp->next;
        }while(temp!=start1);
        if(found == 0){
            printf("| %d \t",ptr2->data);
        }
        ptr2 = ptr2->next;
    }while(ptr2 != start2);
}

int main(){
    int ch=0;
    start1=NULL;
    start2=NULL;
    
    do{
        printf("\n============ M A N U ==============");
        printf("\n1. Insert first");
        printf("\n2. Display first");
        printf("\n3. Insert 2 linklist");
        printf("\n4. Display 2 linklist");
        printf("\n5. intersect list");
        printf("\n6. union list");
        printf("\n10. Exit");
        printf("\nEnter ch = ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                insert1();
                break;
            case 2:
                display1();
                break;
            case 3:
                insert2();
                break;
            case 4:
                display2();
                break;
            case 5:
                intersect();
                break;
            case 6:
                unionlist();
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