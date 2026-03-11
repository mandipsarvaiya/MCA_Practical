//Stack Demo
#include<stdio.h>
#include<conio.h>
#define size 5

int Stack[size];
int top=-1;

int menu();

void peek();
void change();
void push();
void pop();
void display();
void main()
{
	int ch;
	clrscr();

	do
	{
		ch=menu();
		switch(ch)
		{
			case 1:
				//push
				push();
				display();
				break;

			case 2:
				//pop
				pop();
				display();
				break;

			case 3:
				//peek
				peek();
				display();
				break;

			case 4:
				//change

				change();
				display();
				break;

			case 5:
				//display
				display();
				break;

			case 0:
				exit(0);
			default:
				printf("\n\n\tEnter proper choice between 1 to 5\n");
		}
	}while(ch!=0);


	getch();
}

void peek()
{
	int pos;
	printf("\n\n\tEnter position u want to see=>");
	scanf("%d",&pos);
	if(top==-1)//empty
	{
		printf("\n\tStack Empty..\n");

	}
	else if(pos>top+1)
	{
		printf("\n\nPosition is too high..");
	}
	else
	{
		printf("\n\n\t\t%d is at position %d",Stack[top-pos+1],pos);
	}

}
void change()
{

	int pos,nval;
	printf("\n\n\tEnter position u want to see=>");
	scanf("%d",&pos);
	if(top==-1)//empty
	{
		printf("\n\tStack Empty..\n");

	}
	else if(pos>top+1)
	{
		printf("\n\nPosition is too high..");
	}
	else
	{
		printf("\n\nenter new val u want to change==>");
		scanf("%d",&nval);
		Stack[top-pos+1]=nval;
		printf("\n\n\t\t%d is changed at position %d",nval,pos);
	}
}
void pop()
{
	if(top==-1)//empty
	{
		printf("\n\tStack Empty..\n");

	}
	else
	{
		printf("\n\n\t%d poped...",Stack[top]);
		top--;
	}
}

void push()
{
	int val;
	if(top==size-1)//full
	{
		printf("\n\n\tStack full/overflow...");

	}
	else
	{
		printf("\n\n\tEnter value u want to push==>");
		scanf("%d",&val);

		top++;
		Stack[top]=val;
		printf("\n\t%d push into stack..",val);
	}

}

void display()
{
	int i;


	if(top==-1)//empty
	{
		printf("\n\tStack Empty..\n");

	}
	else
	{
		printf("\n\n\tElements of Stack...\n");
		printf("\n\t-----------------------\n");
		for(i=top;i>=0;i--)
		{
			printf("\n\t\t\t\t%d",Stack[i]);
		}
	}
}

int menu()
{
	int ch;
	printf("\n\t\t1.Push");
		printf("\n\t\t2.Pop");
	printf("\n\t\t3.Peek");
	printf("\n\t\t4.Change");
	printf("\n\t\t5.Display");
	printf("\n\t\t0.Exit");

	printf("\n\t\t\tEnter your choice...");
	scanf("%d",&ch);

	return ch;
}