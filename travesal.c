#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left;
struct node*right;
};
struct node*root=NULL, *cur,*temp;
struct node*create()
{
cur= (struct node*)malloc(sizeof(struct node));
scanf("%d" , &cur->data);
cur->left = NULL;
cur->right = NULL;
if(root == NULL)
	root = cur;
else
{
	temp = root;
	while(temp!=NULL)
	{
		if(cur->data < temp->data && temp->left == NULL)
			{
				temp->left = cur;
				return root;
			}
		else if(cur->data < temp->data && temp->left!= NULL)
			{
				temp = temp->left;
			}
		else if(cur->data > temp->data && temp->right == NULL)
			{
				temp->right = cur;
				return root;
			}
		else if(cur->data > temp->data && temp->right!= NULL)
			{
				temp = temp->right;
			}
	}
}
}
void preorder(struct node*root)
{
if(root!=NULL)
	{
		printf("%d",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(struct node*root)
{
if(root!= NULL)
	{
		inorder(root->left);
		printf("%d", root->data);
		inorder(root->right);
	}
}
void postorder(struct node*root)
{
if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d",root->data);
	}
}
int main()
{
int ch;
while(1){
printf("\n1-create \n2-preoder \n3-inorde \n4-postorder \5-exit");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
	case 1:create();
		   break;
	case 2:preorder(root);
		   break;
	case 3:inorder(root);
		   break;
	case 4:postorder(root);
		   break;
	case 5:exit(0);
}
}
}
 		   
