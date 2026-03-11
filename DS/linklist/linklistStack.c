#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push()
{
    struct node *newNode;
    int value;

    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        printf("Stack Overflow (Memory Full)\n");
        return;
    }

    printf("Enter value to push: ");
    scanf("%d", &value);

    newNode->data = value;
    newNode->next = top;   // important line
    top = newNode;

    printf("Push successful\n");
}

void pop()
{
    struct node *temp;

    if (top == NULL)
    {
        printf("Stack Underflow (Stack is empty)\n");
        return;
    }

    temp = top;
    printf("Popped element: %d\n", top->data);
    top = top->next;
    free(temp);
}

void display()
{
    struct node *ptr;

    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    ptr = top;

    printf("Stack elements:\n");
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    int ch;

    do
    {
        printf("\n0. Exit\n1. Push\n2. Pop\n3. Display\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
        }

    } while (ch != 0);

    return 0;
}
