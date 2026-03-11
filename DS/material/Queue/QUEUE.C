#include<stdio.h>
#include<conio.h>

#define SIZE 5

int front = -1;
int rear  = -1;

int q[SIZE];

void insert();
void del();
void print();

void main()
{
	int choice;

	do
	{
		clrscr();
		printf("1. Insert\n2. Delete\n3. Print\n4. Exit");
		printf("\nEnter Your Choice.... : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
					insert();
					print();
					getch();
					break;
			case 2:
					del();
					print();
					getch();
					break;
			case 3:
					print();
					getch();
					break;
			case 4:
					exit(0);
		}
	}while(choice != 4);
}


void insert()
{
	int no;

	printf("\nEnter no : ");
	scanf("%d",&no);

	if(rear < SIZE-1)
	{
		rear++;
		q[rear] = no;

		if(front == -1)
			front = 0;
	}
	else
	{
		printf("\nQueue overflow...");
	}
}

void del()
{
	if(front == -1)
	{
		printf("\nQueue Underflow...");
		return;
	}
	else
	{
		printf("\nElement deleted : %d",q[front]);
	}
	if(front == rear)
	{
		front = -1;
		rear = -1;
	}
	else
	{
		front = front + 1;
	}
}

void print()
{
int i;
	if(front == -1)
	{
		printf("\nQueue is empty...");
		return;
	}

	for(i=front;i<=rear;i++)
		printf("\n%d",q[i]);
}
