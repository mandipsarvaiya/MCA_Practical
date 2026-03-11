#include<stdio.h>
#include<conio.h>

#define SIZE1 5
#define SIZE2 5
#define SIZE3 10

void main()
{
	int A[SIZE1] = {0};
	int B[SIZE2] = {0};
	int C[SIZE3] = {0};

	int i,j,k;
	clrscr();
	printf("\nEnter Array A\n");
	for(i=0;i<SIZE1;i++)
		scanf("%d",&A[i]);

	printf("\nEnter Array B\n");
	for(j=0;j<SIZE2;j++)
		scanf("%d",&B[j]);

	i = 0;
	j = 0;
	k = 0;
	while(i<SIZE1 && j<SIZE2)
	{
		if(A[i]<=B[j])
		{
			C[k++] = A[i++];
		}
		else
		{
			C[k++] = B[j++];
		}
		//C[k++] = (A[i]<B[j]) ? A[i++] : B[j++]);

	}

	while(i<SIZE1)
	{
		C[k++] = A[i++];
	}
	while(j<SIZE2)
	{
		C[k++] = B[j++];
	}
	clrscr();

	printf("\nArray A\n\n");
	for(i=0;i<SIZE1;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\nArray B\n\n");
	for(i=0;i<SIZE2;i++)
	{
		printf("%d\t",B[i]);
	}
	printf("\nArray C\n\n");
	for(i=0;i<SIZE3;i++)
	{
		printf("%d\t",C[i]);
	}
	getch();



}
