#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node* attach(struct node*,struct node*);
struct node* create(struct node*);
void display(struct node*);
struct node
{
	int data;
	struct node *left,*right;
	int h,l;
};
int main()
{
	struct node *a=NULL;
	a=create(a);
	display(a);
	getch();
} 
struct node*create(struct node *a)
{
	struct node *nn;
	int ch;
	do
	{
	nn=(struct node*)malloc(sizeof(struct node));
	nn->left=NULL;nn->right=NULL;nn->h=NULL;nn->l=NULL;
	printf("enter data");
	scanf("%d",&nn->data);
  	a=attach(a,nn);	
	printf("do u want to create another node\n");
	ch=getch();
	}while(ch!='n');
return a;
}
struct node* attach(struct node *a,struct node* nn)
{
	int i;
	if(a==NULL)
	{
	a=nn;
	return a;
	}
	else
	{
	printf("enter left or right\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1: if(a->left==NULL)
					a->left=nn;
				else
				attach(a->left,nn);
				break;
		case 2: if(a->right==NULL)
				a->right=nn;
				else
				attach(a->right,nn);							
				break;
	}	
	}
return a;
}
void display(struct node*a)
{
	if(a!=NULL)
	{
		display(a->left);
		printf(" %d",a->data);
		display(a->right);
	}
}
struct node* verify(struct node *a)
{
	if(a->left!=NULL)
	verify(a->left);
	verify(a->right);
	if(a->left==NULL&&a->right==NULL)
	{
		a->l=a->data;
		a->h=a->data;
	}
	else if(a->left!=NULL&&a->right=NULL)
	{
	 	int h;
	 	h=a->left->data;
	 	
	}
}
