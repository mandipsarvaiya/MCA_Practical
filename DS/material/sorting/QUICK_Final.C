/*   Quick  Sort  Pivot first */

#include<stdio.h>
#include<conio.h>


void print(int A[],int n);

void main()
{


	int i,n;
	int A[100];

	clrscr();

	printf("Enter How many elements : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	printf("Enter No : ");
	scanf("%d",&A[i]);
	}

	    printf("\nYour Array is       : ");
	    print(A,n);

	    printf("\nArray After Sorting : ");
	    quickSort(A,0,n-1);
	    print(A,n);

    getch();
}

void print(int A[],int n)
{
	int i;

	for(i=1;i<n;i++)
		printf("%d  ",A[i]);

}

quickSort(int A[],int lower,int upper)
{
	int index;
	if(upper>lower)
	{
		index = partition(A,lower,upper);
		quickSort(A,lower,index-1);
		quickSort(A,index+1,upper);
	}
	return;
}

int partition(int A[],int lower,int upper)
{
	int pivot,i,j,tmp;
	i = lower;
	j = upper + 1;
	pivot = A[lower];//first element

	while(j >= i)
	{
		while(A[++i] < pivot);
		
		while(A[--j] > pivot);

		if(j>i)
		{
			tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}

	}
	tmp = A[lower];//pivot swap
	A[lower] = A[j];//swap pivot with A[j]
	A[j] = tmp;
	return j;//return index for next partition
}