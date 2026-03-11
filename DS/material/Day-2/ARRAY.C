//Array operation

#include<stdio.h>
#include<conio.h>
#define size 100

int a[size],N;
void print(int a[10],int n);//fun declare
void insert(int a[10],int n);//fun declare
void delete_arr(int a[10],int n);//fun declare
void reverse_arr(int a[10],int n);//fun declare
int Linear_Search(int a[10],int n,int key);//fun declare
int menu();
void main()
{
	int ch,i,n,key,p;
	clrscr();

	//Read array
	printf("\n\n\tEnter how many elements==>");
	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		printf("\n\nEnte %d element=>",i);
		scanf("%d",&a[i]);
	}



	do
	{
	ch=menu();
	switch(ch)
	{
		case 1: //Print
			//printf("\nPrint fun");
			print(a,N);
			break;

		case 2: //Insert
			insert(a,N);
			break;

		case 3: //Delete
			delete_arr(a,N);
			break;

		case 4: //reverse
			reverse_arr(a,N);//fun call
			break;

		case 5: //Linear search


			printf("\n\n\tEnter value u want to search==>");
			scanf("%d",&key);
			p=Linear_Search(a,N,key);
			if(p>0)//fun call
			{
				printf("\n\n\t%d Found...at position %d",key,p);
			}
			else
			{
				printf("\n\n\t%d NOT Found...",key);

			}
			break;
		case 0:
			exit(0);

		default:
			printf("\n\n\tEnter proper choice");
	}
	}while(ch!=0);


	getch();
}




int Linear_Search(int a[10],int n,int key)//fun define
{

	int i;

	for(i=0;i<n;i++)
	{
		if(a[i] == key)
		{
			return (i+1);
		}
	}
	return 0;

}

int menu()
{
	int choice;
	printf("\n\n\t1. Print");
	printf("\n\n\t2. Insert Element");
	printf("\n\n\t3. Delete Element");
	printf("\n\n\t4. Reverse Element");
	printf("\n\n\t5. Linear Search");
	printf("\n\n\t0. Exit");

	printf("\n\n\t\tEnter your choice==> ");
	scanf("%d",&choice);

	return choice;


}


void reverse_arr(int a[10],int n)//fun define
{
	int i,j,tmp;

	for(i=0,j=n-1 ; i<n/2 ; i++,j--)
	{
		tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
	}

	print(a,N);//call print funtion
}
void print(int a[10],int n)//fun define
{
	int i;
	printf("\n\n\tElements of array are...\n");
	for(i=0;i<n;i++)
	{
		printf("  %d",a[i]);
	}
}

void insert(int a[10],int n)//fun define
{
	int i,pos,val;
	printf("\n\n\tEnter position u want to insert...\n");
	scanf("%d",&pos);
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];//shift element to make space
	}
	printf("\n\n\tEnter Value u want to insert...\n");
	scanf("%d",&val);
	a[pos-1]=val;
	printf("\n\n\t%d is inserted at position %d successfully...",val,pos);
	N++;
	print(a,N);
}
void delete_arr(int a[10],int n)//fun define
{
	int i,pos,tmp;
	printf("\n\n\tEnter position u want to delete...\n");
	scanf("%d",&pos);
	tmp=a[pos-1];
	for(i=pos-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	N--;
	printf("\n\t\t\t%d deleted successfully.. ",tmp);
	print(a,N);


}