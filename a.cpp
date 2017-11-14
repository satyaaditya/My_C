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
void delet(struct node *tree,int k)
{
   struct node *cur,*parent,*suc,*psuc,*ptr;
	if(tree->left==NULL)
	{
		printf("\ntree empty");
		return ;
	}
	parent=tree;
	cur=tree->left;
	while(cur!=NULL&&k!=cur->data)
	{
		parent=cur;
		cur=(k<cur->data)?cur->left:cur->right;
	}
	if(cur==NULL)
	{
		printf("\n value to be deleted is not in tree\n");
		return;
	}
	if(cur->left==NULL)
	ptr=cur->right;
	else if(cur->right==NULL)
	ptr=cur->left;
else
{
	psuc=cur;
	cur=cur->left;
	while(suc->left!=NULL)
	{
		psuc=suc;
		suc=suc->left;
	}
    if(cur==psuc)
    suc->left=cur->right;
	else
	{
		suc->left=cur->left;
		psuc->left=suc->right;
		suc->right=cur->right;
	}
	ptr=suc;
}
if(parent->left==cur)
parent->left=ptr;
else
parent->right=ptr;
free(cur);
return;
}

