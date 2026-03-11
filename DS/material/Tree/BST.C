
/* Aim: Write a C program to Implement following Operation on
		Binary Search Tree (Use Recursion).
	1. Create
	2. Traversal (Inorder,Preorder, Postorder)
	3. Insert
	4. Search
	5. Delete

	*/

#include<stdio.h>
#include<conio.h>
typedef struct BST
{
	struct BST *lchild;
	int data;
	struct BST *rchild;
}bstnode;


void menu();

void create(bstnode *);
void insert(bstnode *,bstnode *,int);//Recursive Method.
void inorder(bstnode *);
void preorder(bstnode *);
void postorder(bstnode *);

void main()
	{
	bstnode *root, *ptr;
	int ch,item;
	clrscr();
	root=(bstnode *)malloc(sizeof(bstnode));
	root->data=NULL;
	root->lchild=NULL;
	root->rchild=NULL;

	while(1)
		{
		menu();
		scanf("%d",&ch);
		switch(ch)
			{
			case 1:
				create(root);
				break;
			case 2:
				inorder(root);
				break;
			case 3:
				preorder(root);
				break;
			case 4:
				postorder(root);
				break;

			case 0:
				exit(1);
			}
		getch();
		menu();
		}
	}
void menu()
	{
	printf("\nMenu");
	printf("\n1. Create Binary Search Tree");
	printf("\n2. Traversal - Inorder");
	printf("\n3. Traversal - Preorder");
	printf("\n4. Traversal - Postorder");

	printf("\n0. Exit");
	printf("\nEnter Your Choice:");
	}

void create(bstnode *root)
	{
	int i;
	printf("\nEnter value to end enter -999 else Enter Data:::");
	scanf("%d",&i);
	while(i!=-999)
		{
		insert(root,root,i);
		printf("\nEnter value to end enter -999 else Enter Data:::");
		scanf("%d",&i);
		}
	}

void insert(bstnode *newroot,bstnode *oldroot, int item)
//Recursive Process of I	nsertion.
	{
	bstnode *ptr,*ptr1,*new1;
	ptr=newroot;
	ptr1=oldroot;
	if(ptr!=NULL)
		{
		if(item < ptr->data)//left
			{
			//printf("\nLeft Subtree");
			ptr1=ptr;
			ptr=ptr->lchild;
			insert(ptr,ptr1,item);
			}
		else
			{
			if(item > ptr->data)//Right
				{
				//printf("\nRight Subtree");
				ptr1=ptr;
				ptr=ptr->rchild;
				insert(ptr,ptr1,item);
				}
			}
		}
	if(ptr==NULL)
		{
		//printf("\nInsert");
		new1=(bstnode *)malloc(sizeof(bstnode));
		new1->data=item;
		new1->lchild=NULL;
		new1->rchild=NULL;
		printf("\nParent node is:%d",ptr1->data);
		if(ptr1->data < item)
			ptr1->rchild=new1;
		else
			ptr1->lchild=new1;
		}
	}

void inorder(bstnode *root)
//Recursive Inorder Traversal Method.
	{
	 bstnode *ptr;
	ptr=root;
	if(ptr!=NULL)
		{
		inorder(ptr->lchild);
		printf("\n%d",ptr->data);
		inorder(ptr->rchild);
		}
	}

void preorder(bstnode *root)
//Recursive Preorder Traversal Method.
	{
	 bstnode *ptr;
	ptr=root;
	if(ptr!=NULL)
		{
		printf("\n%d",ptr->data);
		preorder(ptr->lchild);
		preorder(ptr->rchild);
		}
	}
void postorder(bstnode *root)
//Recursive Postorder Traversal Method.
	{
	 bstnode *ptr;
	ptr=root;
	if(ptr!=NULL)
		{
		postorder(ptr->lchild);
		postorder(ptr->rchild);
		printf("\n%d",ptr->data);
		}
	}

