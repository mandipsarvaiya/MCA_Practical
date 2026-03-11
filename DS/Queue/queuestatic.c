#include <stdio.h>
#define MAX 10
int queue[MAX] = {10,20,30};
int front=0;
int rear=2;

void enqueue(){
    int num;
    if(rear==MAX-1){
        printf("Queue is overflow");
        return;
    }
    if(front==-1){
        front=front+1;
    }
    rear=rear+1;
    printf("Enter element to insert in queue");
    scanf("%d", &num);
    queue[rear]=num;

    printf("Element insert successfully");
}

void dequeue(){
    if(front==-1 || front > queue){
        printf("Queue is Empty");
        return;
    }
    front=front+1;
}

void peek(){
    if(front==-1){
        printf("Queue is Empty");
        return;
    }
    printf("Peek element is = %d", queue[front]);
}

void display(){
    if(front==-1){
        printf("Queue is Empty");
        return;
    }
    for (int i = front; i <= rear; i++){
        printf("Queue[%d]: %d ----", i, queue[i]);
    }
}

int main(){
    int ch;
    do{
        printf("\n1. insert element\n2. deletion element\n3. peek\n4. Display element");
        printf("\nEnter your choice");
        scanf("%d", &ch);

        switch (ch)
        {
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
