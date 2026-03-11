/*
       Definition: -	Write a program To Convert Infix Expression to Postfix Notation.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int curpos,lastpos;
char stk[20];
int top;

void push(char);
char pop();
char read_symbol(char []);
int isp(char);
int icp(char);
void output(char,char opstr[]);

void infix_to_postfix(char infix[],char opstr[]);

void main()
{
	int i;
	char infix[20],opstr[20];
	clrscr();
	printf("Enter Infix Expression:");
	scanf("%s",infix);

	for(i=0;infix[i]!='\0';i++);

	infix[i]=')';
	infix[i+1]='\0';

	curpos=-1;
	lastpos=-1;
	top=-1;



	infix_to_postfix(infix,opstr);
	printf("\nInfix Expression is:%s",infix);
	printf("\nOutput is:%s",opstr);
	getch();
}
char read_symbol(char infix[])
{
	curpos=curpos+1;
	return (infix[curpos]);
}
int isp(char x)
{
	int value;
	switch(x)
	{
		case '+':
		case '-':
			value=2;
			break;
		case '*':
		case '/':
			value=4;
			break;
		case '^':
			value=5;
			break;
		case '(':
			value=0;
			break;
		default:
			value=8;
			break;
	}
	return(value);
}
int icp(char x)
{
	int value;
	switch(x)
	{
		case '+':
		case '-':
			value=1;
			break;
		case '*':
		case '/':
			value=3;
			break;
		case '^':
			value=6;
			break;
		case '(':
			value=9;
			break;
		case ')':
			value=0;
			break;
		default:
			value=7;
			break;
	}
	return(value);
}
void output(char symbol,char opstr[])
{
	lastpos=lastpos+1;
	opstr[lastpos]=symbol;
	opstr[lastpos+1]='\0';
}
void push(char symbol)
{
	top=top+1;
	stk[top]=symbol;
}
char pop()
{
	char symbol;
	symbol=stk[top];
	top=top-1;
	return(symbol);
}
void infix_to_postfix(char infix[],char opstr[])
{
	char item,x;
	push('(');


	printf("\nRead Symbol\tStack\t\tOutput\t");

	while(top>=0)
	{
		item=read_symbol(infix);
		x=pop();

		flushall();
		if((item>=97 && item<=122)||(item>=65 && item<=90))
		{
			push(x);
			output(item,opstr);

		}
		else if(item==')')
		{
			while(x!='(')
			{
				output(x,opstr);
				x=pop();
			}
		}
		else if(isp(x)>=icp(item))
		{
			while(isp(x)>=icp(item))
			{
				output(x,opstr);

				x=pop();
			}
			push(x);
			push(item);
		}
		else if(isp(x)<icp(item))
		{
			push(x);
			push(item);
		}
		printf("\n--------------------------------------------");
		printf("\n%c\t\t%s\t\t%s\t\t\t",item,stk,opstr);
		getch();
	}

}

/*---------------------OUTPUT----------------------------


																																														