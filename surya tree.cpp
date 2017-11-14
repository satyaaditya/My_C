#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void ins(int);
void printleave(struct node *);
void printboundaryright(struct node *);
void printboundaryleft(struct node *);
struct node
{
	int data;
	struct node *left,*right;
};
struct node *nn,*m,*root=NULL;
int main()
{
	int ch;
	printf("\n1.insert 2.exit");
	while(1)
	{
	printf("nter choice\n");
	scanf("%d",&ch);
		switch(ch)
	{
		case 1:create();
               break; 
		case 2:printleave(root);
		break;
		case 3 :exit(0); 	             
	}
	}
getch();
}
void create()
{
	int k;
	printf("\nenter k value");
	scanf("%d",&k);
	nn=(struct node*)malloc(sizeof(struct node));
	if(root==NULL)
	{
		nn->data=k;
		nn->right=NULL;
		nn->left=NULL;
		root=nn;
		m=root;
		return;	
	}
	else
	ins(k);
	}
void ins(int k)
{
	if(k>root->data)
	{
		if(m->left==NULL)
		{
		 m->left=nn;
		 m=root;
		nn->left=NULL;
		nn->right=NULL;
		}
	    else
	    {
	    	m=m->left;
	    	ins(k);
	    }
	}
	else 
	{
		if(m->right==NULL)
		{
			m->right=nn;
		 	m=root;
		    nn->left=NULL;
		    nn->right=NULL;
		}
		else
		{
			m=m->right;
			ins(k);
		}
	}
}		
void printleave(struct node *root)
{
	if(root)
	{
		printleave(root->left);
		if(!(root->left)&& !(root->right))
        printf("\t%d\t",root->data);
        printleave(root->right);
	}
	
}
void printboundaryleft(struct node *root)
{
	if(root)
	{
		if(root->left)
	{
		printf("\t%d\t",root->data);
		printboundaryleft(root->left);
	}
		else if(root->right)
	{
		printf("\t%d\t",root->data);
		printboundaryleft(root->right);
	}
}
}
void printboundaryright(struct node *)
{
	if(root)
	{
		if(root->right)
		{
			printboundaryright(root->right);
			printf("\t%d",root->right);
		}
		else if(root->left)
		{
			printboundaryright(root->left);
			printf("\t%d",root->left);
			
		}
	}
}
void printboundary(struct node*)
{
	if(root)
	{
		printf("%d\t",root->data);
		printboundaryleft(root->left);
		printleave(root->left);
		printleave(root->right);
		printboundaryright(root->right);
	}
}
