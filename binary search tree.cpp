#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void attach(struct node*,struct node*);
void print(struct node*);
void search(struct node *,int);
void delet(struct node *,int);
struct node
{
	int data;
	struct node *left,*right;
}*first=NULL ;
struct node *temp=NULL,*start=first;
int main()
{
	int ch,k;
    printf("\n1.create\n2.exit\n3.print tree\n4.search element\n");
	while(1)
	{
		printf("\nenter choice\n");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	 	case 1 : printf("\ncreate a node\n");
	 				create();
	 				break;
		case 2: exit(0);
	    case 3:print(first);
	     		break;
	    case 4 : printf("\nenter element to search\n");
	    			scanf("%d",&k);
	    		  search(first,k);
					break;
		case 5 : printf("\nenter element to delete\n");
					scanf("%d",&k);
					delet(first,k);
					break;
	 }	
	}
getch();
}
void create()
{
	struct node *nn;
	nn=(struct node*)malloc(sizeof(struct node));
	printf("\nenter data in new node");
	scanf("%d",&nn->data);
    nn->left=NULL;
    nn->right=NULL;
   temp=first;
  attach(nn,temp);
}
void attach(struct node *nn,struct node *temp)
{
	if(first==NULL)
	{
   		first=nn;
   		temp=first;
}
	else
    {   
    	if(nn->data<temp->data)
    	{
    	  if(temp->left==NULL)
		   temp->left=nn;
		 else
		 	attach(nn,temp->left);
		}
       else if(nn->data>temp->data)
	    {
	    	if(temp->right==NULL)
	    	temp->right=nn;
	    	else
	    	attach(nn,temp->right);
	    }
	}
}
void print(struct node *first)
{ 
  if(first!=NULL)
 {
  print(first->left);
  printf("\t%d",first->data);
  print(first->right);
}
return;
}
void search(struct node *temp,int k)
{
	if(temp!=NULL)
	{
	if(k==temp->data)
	{
	printf("element found");
	return;
	}
	if(k<temp->data)
	search(temp->left,k);
	else
	search(temp->right,k);
	}
  else
  printf("\nnot found");
}
void delet(struct node *root,int k)
{
   struct node *temp,*cur,*o;
	if(root==NULL)
	return ;
	if(k<root->data)
	delet(root->left,k);
	else if(k>root->data)
	delet(root->right,k);
	else
	{
		if(root->left==NULL)
		{
		temp=root;
		root=root->right;
	    free(temp);
		return ;
	}
	   else	if(root->right==NULL)
		{ 
		temp=root;
		root=root->left;
		free(temp);
		return ;
		}
	    else
	    {
	    temp=root;cur=root;
		temp=temp->left;
		while(temp!=NULL)
		 {
			if(cur->data>temp->data)
			cur=temp;
			temp=temp->left;
		}
		 cur=root;
		 return ;
	    }
	}
}
