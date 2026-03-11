#include<stdio.h>
#include<conio.h>
#include<process.h>

struct CircularSinglylist
{
	int no;
	struct CircularSinglylist *next;
};
typedef struct CircularSinglylist node;
void create(node*);
void print(node*);
void merge();


node *sort(node *);
node *insert(node*);
node *delete_node(node *);
node *head,*list1,*list2;

void main()
{
	node *head;
	char ch;
	int c;
	head=(node *)malloc(sizeof(node))
	;
	clrscr();

	do
	{
		printf("\n");
		printf("\n\t\t***************\tSingly Linked List\t**********");
		printf("\n\t\t[1].Create\n\t\t[2].Insert Node.\n\t\t[3]Display node");
		printf("\n\t\t[4].Delete node\n\t\t[5].Sort Node");
		printf("\n\t\t[7].Exit");
		printf("\n\n******************************************\n\n");

		printf("\nEnter your choice::");
		scanf("%d",&c);

		switch(c)
		{
			case 1:
			{
				create(head);
				break;
			}
			case 2:
			{
				head=insert(head);
				break;
			}
			case 3:
			{
				print(head);
				break;
			}
			case 4:
			{
				head=delete_node(head);
				break;
			}
			case 5:
			{
				head=sort(head);
				break;
			}
			case 7:
			{
				exit(0);
			}
			default:
			{
				printf("\nEnter right choice...");
			}
		}

	}while(c!=7);
	getch();
}




void create(node *l)
{
	int lm,i;
	node *tmphead=l;
	printf("\nEnter the limit::");
	scanf("%d",&lm);

	for(i=0;i<lm;i++)
	{
		l->next=(node *)malloc(sizeof(node*));
		l=l->next;

		printf("\nEnter the number=");
		scanf("%d",&l->no);


	}
	l->next=tmphead;
}
void print(node *head)
 {
	node *p;
	p=head;
	do
	{
		p=p->next;
		printf("%d-->",p->no);

	}while(p->next!=head);

}
node *insert(node *head)
{
	int key,num;
	char c;
	node *newnode,*n1;
	printf("\nEnter 0 or -ve for first insertion::");
	scanf("%d",&key);

	if(key<=0)      //insertion at first
	{
		newnode=(node *)malloc(sizeof(node*));
		printf("\nEnter the number for insertion==");
		scanf("%d",&newnode->no);
		newnode->next=head->next;
		head->next=newnode;
		print(head);
	}
	else
	{

		n1=head;
		while(n1->no!=key)
		{
			n1=n1->next;
		}

		printf("\nEnter the number for insertion==");
		scanf("%d",&num);
		newnode=(node *)malloc(sizeof(node*));
		newnode->no=num;


		if(n1->next==head) //end
		{
				n1->next=newnode;
				newnode->next=head;//last node point to head
				print(head);
		}
		else  //between
		{
				newnode->next=n1->next;
				n1->next=newnode;
				print(head);
		}



	}
	return(head);
}
node *delete_node(node *head)
{
	node *n1,*temp;
	int key;
	printf("\nEnter the key node for deletion::");
	scanf("%d",&key);

	temp=head->next;
	if(temp->no==key)  //delete first
	{

			head->next=temp->next;
			free(temp);
			print(head);
	}
	else
	{


		n1=head;
		while(n1->next->no!=key)
		{
			n1=n1->next;
		}

		if(n1->next->next==head)//End
		{
			temp=n1->next;

			free(temp);
			n1->next=head;
			print(head);
		}
		else             //between
		{
		       temp=n1->next;
		       n1->next=temp->next;
		       free(temp);
		       print(head);

		}
	}
	return head;
}
node *sort(node *head)
{
	node *i,*j;
	int temp;
	for(i=head;(i->next)!=head;i=i->next)
	{
		for(j=head;(j->next)!=head;j=j->next)
		{
			if((i->no)<(j->no))
			{
				temp=i->no;
				i->no=j->no;
				j->no=temp;
			}
		}
	}
	printf("\nThe sorted list is::");
	print(head);
	return(head);
}
