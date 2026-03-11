#include <stdio.h>

struct tree
{
    int key;
    struct node *left, *right;
};
typedef struct tree node;

node * newNode(int item)
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(node* root)
{
    if (root != NULL)
    {
	inorder(root->left);
	printf("%d  ", root->key);
	inorder(root->right);
    }
}
node* insert(node *n, int key)
{
    if (n == NULL)
	return newNode(key);//insert node
    if (key < n->key)//left
	n->left = insert(n->left, key);
    else if (key > n->key)//right
	n->right = insert(n->right, key);
    return n;
}
void main()
{
    node *root = NULL;
    clrscr();
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("\nInorder Traversal: ");
    inorder(root);

    getch();
}