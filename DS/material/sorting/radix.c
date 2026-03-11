/*
	Roll No: - 07MCA57
	Defination:- WAP to implement Radix sort.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int r[100],bucket[100][10],n;
void main()
{
	int i;
	void radix_sort();
	clrscr();
	printf("\nEnter No. Of Elements:- ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Value For Element %d :",i+1);
		scanf("%d",&r[i]);
	}
	radix_sort();
	printf("\nAfter Sorting :\n");
	for(i=0;i<n;i++)
	{
		printf(" -> %d ",r[i]);
	}
	getch();
}

void radix_sort()
{
	int i,max,cnt,count=0,k,j,x;
	//step-1: find maximum element of array
	max=r[0];
	for(i=1;i<n;i++)
	{
		if(r[i] > max)
		max=r[i];
	}
	printf("\nMax : %d",max);
	//step-2 find no of digit of maximum element
	while(max!=0)
	{
		max=max/10;
		count++; //digit
	}
	printf("\nNumber fo Didit : %d",count);
	//radix sort
	for(cnt=1;cnt<=count;cnt++)
	{
		for(i=0;i<n;i++)//set 0 to all matrix
		{
			for(j=0;j<10;j++)
			{
				bucket[i][j]=0;
			}
		}
		for(i=0;i<n;i++)
		{
			x=r[i] % (int)pow(10,cnt);//0th pos-10th pos-100th pos
			if(cnt!=1)
				x=x/pow(10,cnt-1);
			bucket[i][x]=r[i];
		}
		getch();
		clrscr();
		printf("\nAfter step%d\n",cnt);
		printf("\n%5c%5d%5d%5d%5d%5d%5d%5d%5d%5d%5d",'A',0,1,2,3,4,5,6,7,8,9);
		printf("\n --------------------------------------------------------------------");
		for(i=0;i<n;i++)
		{
			printf("\n %5d",r[i]);
			for(j=0;j<10;j++)
			{
				if(bucket[i][j]==0)
				{
					printf("%5c",' ');
				}
				else
				{
					printf("%5d",bucket[i][i]);
				}
			}
		}
		printf("\n --------------------------------------------------------------------");
		k=0;
		for(i=0;i<10;i++)
		{
			for(j=0;j<n;j++)
			{
				if(bucket[j][i]!=0)
				{
					r[k]=bucket[j][i];
					k++;
				}
			}
		}
	}
}






/*----------------------------OUTPUT----------------------------------------------------
 Enter No. Of Elements: - 6
 Enter Value For Element 1 :32
 Enter Value For Element 2 :56
 Enter Value For Element 3 :44
 Enter Value For Element 4 :12
 Enter Value For Element 5 :5
 Enter Value For Element 6 :111
 After step1
	A    0    1    2    3    4    5    6    7    8    9
	--------------------------------------------------------
	32              0
	56                                 0
	44                        0
	12              0
	 5                             0
          111         0
	--------------------------------------------------------
	After step2
	A    0    1    2    3    4    5    6    7    8    9
	-------------------------------------------------------
	111         0
	32                   0
	12         0
	44                        0
	 5    0
	56                            0
 -------------------------------------------------------
 After step3
 A    0    1    2    3    4    5    6    7    8    9
 -------------------------------------------------------
	 5    5
111 111
	12    0
	32    0
	44    0
	56    0
 -------------------------------------------------------
 After Sorting :
 -> 5  -> 12  -> 32  -> 44  -> 56  -> 111
 ---------------------------------------------------------

*/
