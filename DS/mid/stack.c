#include<stdio.h>
#include<stdlib.h>

#define n 100

int arr[n];
int top = -1;

void push();
void pop();
void peek();
void display();

int main()
{
    int choice;

    while(1){
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: peek();
                    break;
            case 4: display();
                    break;
            case 5: exit(0);
            default: printf("Invalid choice");
        }
    }
}

void push(){
    int number;

    if(top == n-1){
        printf("Stack Overflow\n");
    }
    else{
        printf("Enter number: ");
        scanf("%d",&number);

        top++;
        arr[top] = number;

        printf("Number added\n");
    }
}

void pop(){
    if(top == -1){
        printf("Stack Underflow\n");
    }
    else{
        printf("Popped element: %d\n",arr[top]);
        top--;
    }
}

void peek(){
    if(top == -1){
        printf("Stack Underflow\n");
    }
    else{
        printf("Top element: %d\n",arr[top]);
    }
}

void display(){
    if(top == -1){
        printf("Stack Underflow\n");
    }
    else{
        printf("Stack elements:\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",arr[i]);
        }
    }
}