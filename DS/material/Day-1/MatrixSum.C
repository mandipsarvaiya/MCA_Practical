//Matrix
#include<stdio.h>
#include<conio.h>

void print_matrix(int a[10][10],int r,int c);//fun declare
void sum_matrix(int a[10][10],int r,int c);

void main()
{
	int a[10][10],i,j,r,c;
	clrscr();

	printf("\n\n\tEnter how many rows and cols::");
	scanf("%d %d",&r,&c);

	//Read
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n\n\tEnter  a[%d][%d] ==> ",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	//Print
	print_matrix(a,r,c); //Call fun
	sum_matrix(a,r,c);

	getch();
}
void print_matrix(int a[10][10],int r,int c)
{
	int i,j;
	printf("\n\n\tMatrix is...\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n\n");
	}

}
void sum_matrix(int a[10][10],int r,int c)
{
	int rsum=0,csum=0,i,j;
	//Row sum
	for(i=0;i<r;i++)
	{
		rsum=0;
		for(j=0;j<c;j++)
		{
			rsum=rsum+a[i][j];
		}
		printf("\n\n\tRow %d sum ==> %d ",(i+1),rsum);

	}
       //Col sum
	for(j=0;j<c;j++)
	{
		csum=0;
		for(i=0;i<r;i++)
		{
			csum=csum+a[i][j];
		}
		printf("\n\n\tCol %d sum ==> %d ",(j+1),csum);

	}


}