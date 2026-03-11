#include <stdio.h>
#include <conio.h>
#define MAX 20


void print_array(int a[],int);
void selection_sort(int a[],int);


void main() {
	int a[MAX],i,n;
	clrscr();

	printf("\n\n\tEnter how many element u want:");
	scanf("%d",&n);

	printf("\n\n\tEnter Element..\n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d value=>",(i+1));
		scanf("%d",&a[i]);

	}
	printf("\n\n\tBefore sorting...\n");
	print_array(a,n); //call read fun

	selection_sort(a,n);

	printf("\n\n\tAfter sorting...\n");
	print_array(a,n); //call read fun

	getch();
}

void selection_sort(int a[],int n)
{
	int i,tmp,min,pass;

	for(pass=0;pass<n-1;pass++)
	{
		min=pass;
		for(i=pass+1;i<n;i++)//find min loop
		{
			if(a[i]<a[min]) //if smaller
			{
				min=i; //store index of min element
			}
		}

		//swap min with pass element
		tmp=a[pass];
		a[pass]=a[min];
		a[min]=tmp;

	}

}
void print_array(int a[],int n)
{
	int i;
	printf("\n\n\tElements of array are...\n");
	for(i=0;i<n;i++)
	{
		printf("%-5d",a[i]);
	}
}
