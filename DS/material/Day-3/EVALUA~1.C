
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void push(int stack[],int vl);

int  pop(int stack[]);

int  top = -1;

void main()
{

 static char  post[25],temp[25];
 static int   stack[15],val,val1,val2,i;

 clrscr();
 flushall();
 printf("\nEnter Postfix Expression:- ");
 scanf("%s",post);

	strcpy(temp,post);
	for(i=0; post[i]; i++)
	  if (((post[i]>='a') && (post[i]<='z') )||((post[i]>='A') && (post[i]<='Z')))
	  {
		  printf("Enter value for %c:-  ",post[i]);
		  fflush(stdin);
		  scanf("%c",&temp[i]);
	  }

	 for(i=0; post[i] ;i++)
	  if (((post[i]>='a') && (post[i]<='z'))|| ((post[i]>='A') && (post[i]<='Z')))
		  push(stack,temp[i]-48);
	  else
		  {
			 val2=pop(stack);
			 val1=pop(stack);
			 if (post[i]=='+')   val=val1+val2;
			 if (post[i]=='-')   val=val1-val2;
			 if (post[i]=='*')   val=val1*val2;
			 if (post[i]=='/')   val=val1/val2;
			 push(stack,val);
		  }
		 printf("Post-fix expression is : %s \n",post);
		 printf("Answer = %d \n",pop(stack));
		 getche();

}
 void push(int stack[],int vl)
	{
	     top=top+1;
	     stack[top]=vl;
	}
 int pop(int stack[])
	{
	     int val;
	     val=stack[top];
	     top=top-1;
	     return val;
	}

/*---------------------OUTPUT----------------------------
Enter Postfix Expression: - dfg+-
Enter value for d: - 4
Enter value for f: - 5
Enter value for g: - 6
Post-fix expression is: dfg+-
Answer = -7
*/

