#include<stdio.h>
#include<stdlib.h>

struct poly
{
    int e;
    int c;
    struct poly *next;
};

struct poly *p1 = NULL, *p2 = NULL;

struct poly* insert(struct poly *p)
{
    struct poly *temp, *newNode;
    int e, c;

    printf("Input exponent (Enter -1 to stop) = ");
    scanf("%d", &e);

    if(e == -1)
        return p;

    printf("Input coefficient: ");
    scanf("%d", &c);

    newNode = (struct poly*)malloc(sizeof(struct poly));
    newNode->e = e;
    newNode->c = c;
    newNode->next = NULL;

    if(p == NULL)
        return newNode;

    temp = p;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;

    return p;
}

void display(struct poly *p)
{
    if(p == NULL)
    {
        printf("Polynomial is empty\n");
        return;
    }

    while(p != NULL)
    {
        printf("%dx^%d", p->c, p->e);
        if(p->next != NULL)
            printf(" + ");
        p = p->next;
    }
    printf("\n");
}

struct poly* addPoly(struct poly *p1, struct poly *p2)
{
    struct poly *result = NULL, *temp = NULL;

    while(p1 != NULL && p2 != NULL)
    {
        struct poly *newNode = (struct poly*)malloc(sizeof(struct poly));
        newNode->next = NULL;

        if(p1->e > p2->e)
        {
            newNode->e = p1->e;
            newNode->c = p1->c;
            p1 = p1->next;
        }
        else if(p1->e < p2->e)
        {
            newNode->e = p2->e;
            newNode->c = p2->c;
            p2 = p2->next;
        }
        else
        {
            newNode->e = p1->e;
            newNode->c = p1->c + p2->c;
            p1 = p1->next;
            p2 = p2->next;
        }

        if(result == NULL)
        {
            result = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    while(p1 != NULL)
    {
        result = insert(result);
        p1 = p1->next;
    }

    while(p2 != NULL)
    {
        result = insert(result);
        p2 = p2->next;
    }

    return result;
}

int main()
{
    int ch;
    struct poly *result = NULL;

    do
    {
        printf("\n1. Insert Polynomial 1");
        printf("\n2. Display Polynomial 1");
        printf("\n3. Insert Polynomial 2");
        printf("\n4. Display Polynomial 2");
        printf("\n5. Add Polynomials");
        printf("\n0. Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                p1 = insert(p1);
                break;

            case 2:
                display(p1);
                break;

            case 3:
                p2 = insert(p2);
                break;

            case 4:
                display(p2);
                break;

            case 5:
                result = addPoly(p1,p2);
                printf("Result: ");
                display(result);
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(ch != 0);

    return 0;
}
