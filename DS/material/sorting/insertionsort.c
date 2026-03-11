/*	Defination:- WAP to implement insertion sort.
*/
#include<stdio.h>
#include<conio.h>
void ins_sort(int a[],int n)
{
	 int j,i,k,temp;
	 //a[0]=0;
	 for(j=1;j<=n;j++)
	 {
		 i=j-1;
		 temp=a[j];//save a[j] into tmp
		 while(temp<a[i] && i>=0)
		{
			 a[i+1]=a[i];//shift ith element to i+1 position
			 i--;
		}
		a[i+1]=temp;

		printf("\n\n\n step::%d==>",j);

		for(k=1;k<=n;k++)
		{
			printf("%5d",a[k]);

		}

	 }
}

void main()
{
    int a[100],i,n;
    clrscr();
    printf("\n How many elements u want to enter:");
    scanf("%d",&n);
    printf("\n Unsorted list is as follows::\n");
    for(i=1;i<=n;i++)
    {
	scanf("\n\t\t%d",&a[i]);
    }
    ins_sort(a,n);

    printf("\n\n\n\n Sorted list is as follows\n");
    for(i=1;i<=n;i++)
	printf("%d\t",a[i]);
    getch();
}
