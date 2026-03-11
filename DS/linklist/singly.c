#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *start;
void insert()
{
    struct node *newNode, *ptr;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("\nInput value = ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;
    if (start == NULL){
        start = newNode;
    }
    else{
        ptr = start;
        while (ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
}

void insertAt(){
    int pos, value, count=1;
    struct node *newNode, *ptr;
    newNode = (struct node *)malloc(sizeof(struct node));

    printf("Enter position to add element = ");
    scanf("%d", &pos);
    printf("Enter number to insert in linklist = ");
    scanf("%d", &value);

    newNode->data = value;
    newNode->next = NULL;

    if(pos==1){
        newNode->next = start;
        start = newNode;
        printf("Element inserted at first position");
    }

    ptr=start;
    while (ptr->next != NULL && count<pos-1)
    {
        ptr = ptr->next;
        count++;
    }
    newNode->next = ptr->next;
    ptr->next = newNode;
    printf("Element inserted at your given position");
}

void display()
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("\t%d", ptr->data);
        ptr = ptr->next;
    }
}

void delete()
{
    struct node *ptr;
    ptr = start;

    if (ptr == NULL){
        printf("list is empty");
    }
    else if (ptr->next == NULL){
        start=NULL;
        printf("single node is deleted");
    }
    else{
        while (ptr->next != NULL){
            if (ptr->next->next == NULL){
                ptr->next = NULL;
                printf("node deleted");
                break;
            }
            ptr = ptr->next;
        }
    }
}

void deleteAt()
{
    int value;
    struct node *ptr;
    ptr = start;

    printf("Enter number to delete from linklist = ");
    scanf("%d", &value);

    if(ptr == NULL){
        printf("List is empty");
    } else if(ptr->data == value){
        start = start->next;
        printf("node deleted");
    } else{
        while (ptr->next != NULL)
        {
            if(ptr->next->data == value){
                ptr->next = ptr->next->next;
                printf("node deleted");
            }
            ptr= ptr->next;
        }
    }
}

void count(){
    struct node *ptr;
    int count = 0;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    printf("Total element in linklist is = %d", count);
}

void search(){
    int value, pos=0;
    printf("Enter value to search Node element = ");
    scanf("%d", &value);

    struct node *ptr;
    ptr=start;
    while (ptr != NULL)
    {
        if(ptr->data == value){
            printf("Position of %d is = %d", value, pos+1);
        }
        ptr=ptr->next;
        pos++;
    }
    if(pos==0){
        printf("number is not found in linklist");
    }
}

void deleteEnd(){
    struct node *ptr;
    ptr=start;
    int flag = 0;

    if(start==NULL){
        printf("List is empty");
    }else if(ptr->next == NULL){
        start=NULL;
        flag=1;
        printf("Last node deleted now list is empty");
    }else{
        while(ptr != NULL){
            if(ptr->next->next == NULL){
                ptr->next = NULL;
                flag=1;
                printf("Last node deleted");
            }
            ptr = ptr->next;
        }
    }
    if(flag == 0){
        printf("deletion failed");
    }
}

void rev(){
    
}

void sort(){
    struct node *i, *j;
    int temp;
    for(i=start; i!=NULL; i=i->next){
        for(j=start; j!=NULL; j=j->next){
            if(i->data < j->data){
                temp=i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
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
        printf("\n8. Delete last node");
        printf("\n9. sort linklist");
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
            case 9:
                sort();
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
