#include<stdio.h>
#include<conio.h>


typedef struct SinglyLinkedList
{
	int data;
	struct SinglyLinkedList *next;

}node;


int menu();
void create(node* head);
void display(node* head);

node* insert(node *head);
node* deletell(node *head);

int search(node *head,int key);
int count(node *head);
node* merge(node*,node*);

node * sort(node*);
void main()
{
	int ch,key,cnt;
	node *head=(node*)malloc(sizeof(node));//allocate memory for node
	node *head1=(node*)malloc(sizeof(node));//allocate memory for node
	node *head2=(node*)malloc(sizeof(node));//allocate memory for node
	clrscr();

	do
	{
		ch=menu();
		switch(ch)
			{
			case 1://create
				create(head);
				display(head);
				break;

			case 2://display
				display(head);
				break;
			case 3:
				head=insert(head);
				display(head);
				break;

			case 4:
				head=deletell(head);
				display(head);
				break;
			case 5:
				printf("\n\n\tEnter value u want to search=>");
				scanf("%d",&key);
				if(search(head,key))
				{
					printf("\n\n\t%d Found",key);
				}
				else
				{
					printf("\n\n\t%d NOT Found",key);
				}


				break;

			case 6:
				cnt=count(head);
				printf("\n\n\tTotal no of node are=>%d",cnt);
				break;
			case 7:
				head=sort(head);
				printf("\n\n\tAfter Sorting::\n");
				display(head);

				break;
			case 8:


				head=merge(head1,head2	);
				printf("\n\tAfter Merge\n");
				display(head);
				break;
			case 0:
				exit(0);
			default:
				printf("\n\n\tEnter proper choice...");
		}


	}while(ch!=0);
	getch();
}



int menu()

{
	int ch;
		printf("\n\t-------------------------\n");
		printf("\n\t1.Create Linked List");
		printf("\n\t2.Display Linked List");
		printf("\n\t3.Insert Linked List");
		printf("\n\t4.Delete Linked List");
		printf("\n\t5.Search Linked List");
		printf("\n\t6.Count Linked List");
		printf("\n\t7.Sort Linked List");
		printf("\n\t8.Merge Linked List");
		printf("\n\t0.Exit");
		printf("\n\t\tEnter your choice==>");
		scanf("%d",&ch);


	return ch;
}
node* merge(node* head1,node* head2)
{
	node *p,*q;


	create(head1);
	create(head2);

	printf("\n\n\tFirst Linked List..\n");
	display(head1);
		getch();
	printf("\n\n\tSecond Linked List..\n");
	display(head2);
	getch();


	p=head1->next;

	while(p->next!=NULL)
	{
		p=p->next;
	}
	printf("\n\tLast Node=>%d",p->data);
	getch();

	q=head2->next;
	p->next=q;//merge
	printf("\n\tAfter merge in fun..\n");

	return head1;





}

node * sort(node *head)
{
	node *i,*j,*tmp;
	tmp=(node*)malloc(sizeof(node));


	printf("\n\tSort fun\n");
	for(i=head->next; i!= NULL ;i=i->next)
	{
		for(j=head->next;j != NULL ;j=j->next)
		{
			if((i->data) < (j->data))
			{
				//swap
				tmp->data=i->data;
				i->data=j->data;
				j->data=tmp->data;
			}
		}
	}
	display(head);
	return head;
}

int count(node *head)
{
	int cnt=0;
	node *p=head->next;
	while(p!=NULL)
	{
		  cnt++;
		  p=p->next;
	}
	return cnt;
}

int search(node *head,int key)
{
	node *p=head->next;
	while(p != NULL)
	{
		if(p->data ==key)//if element found..
		{
			return 1;
		}
		p=p->next;
	}


	return 0;
}

node* deletell(node* head)
{

	node *tmp,*x;
	int key;

	printf("\n\n\tEnter value u want to delete==>");
	scanf("%d",&key);

	tmp=head->next;	//tm		p point to next node of head
	if(tmp->data==key)//first node
	{
		head->next=tmp->next;//delete first
		printf("\n\n\t\t%d deleted successfully...",tmp->data);
		free(tmp);  //free memory of tmp node
	}
	else	//between -last
	{

		//delete between
		while(tmp->next->data !=key) //1 level ahead
		{
			tmp=tmp->next;
		}
		if(tmp->next->next==NULL) //delete last
		{
			x=tmp->next;
			printf("\n\n\t\t%d deleted successfully...",x->data);
			tmp->next=NULL;
			free(x);//delete node


		}
		else
		{
			x=tmp->next;
			printf("\n\n\t\t%d deleted successfully...",x->data);
			tmp->next=x->next;
			free(x);//delete node
		}

	}

	return head;
}

node* insert(node *head)
{

	int key;
	node *newnode,*x;
	printf("\n\n\tEnter value u want to insert[0 for first]==>");
	scanf("%d",&key);

	if(key<=0) //insert first
	{

		newnode=(node*)malloc(sizeof(node));
		printf("\n\n\tEnter value for newnode==>");
		scanf("%d",&newnode->data);

		//insert first
		newnode->next=head->next;
		head->next=newnode;
		printf("\n\t\t\t%d inserted successfully..",newnode->data);

	}
	else
	{
		 x=head;
		 while(x->data!=key)
		 {
			x=x->next;
		 }

		newnode=(node*)malloc(sizeof(node));
		printf("\n\n\tEnter value for newnode==>");
		scanf("%d",&newnode->data);



		if(x->next==NULL)//insert last
		{
			x->next=newnode;
			newnode->next=NULL;
			printf("\n\t\t\t%d inserted successfully..",newnode->data);

		}
		else //insert Between
		{

			newnode->next=	x->next;
			x->next=newnode;
			printf("\n\t\t\t%d inserted successfully..",newnode->data);

		}
	}

	return head;
}
void create(node *l)
{

	int limit,i,val;
	printf("\n\n\tEnter how many node u want==>");
	scanf("%d",&limit);

	for(i=1;i<=limit;i++)
	{
		l->next=(node*)malloc(sizeof(node));
		l=l->next;

		printf("\n\n\t\tEnter value u want store==>");
		scanf("%d",&val);		//scanf("%d",&l->data);

		l->data=val;

	}
	l->next=NULL;



}
void display(node *head)
{


	node *p=head;
	if(head->next!=NULL)
	{
	printf("\n\n\t\t-----------Singly Linked List-------------\n");
	do
	{
		p=p->next;
		printf("%d -> ",p->data);

	}while(p->next != NULL);
	printf("\n\n");
	}
	else
	{
		printf("\n\n\tLinked list empty..");
	}
}




