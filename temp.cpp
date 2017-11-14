	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>
	void insert(struct node*,struct node*);
	node* create();
   struct node* create
	{
      struct node *temp;
      temp=(struct node*)malloc(sizeof(struct node));
      temp->left=NULL;
      temp->right=NULL;
 		return temp;
  }
	struct node
	{
	int data;
	struct node *right;
	struct node *left;
	}
	int main()
	{
	int ch;
	struct node *neww,*root;
	root=NULL;	
    printf("enter choice");
    scanf("%d",&ch);
	while(1)
	{
		switch(ch)
		{
		case 1: neww=create();
				printf("\nenter data");
				scanf("%d",neww->data);
				if(root==NULL)
				root=neww;
				else
				{
					insert(root,neww);
				}				
		}
	}
     getch();    
	}
	void insert(struct node *root,struct node *neww)
	{
		if(neww->data<root->data)
		{
		if(root->left==NULL)
		root->left=neww;
		else
		insert(root->left,neww);
	}
	if(neww->data>root->data)
{
		if(root->right==NULL)
		root->right=neww;
		else
		insert(root->right,neww);	
}
	}

