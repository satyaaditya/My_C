#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create(char*,struct node**);
void print(struct node**);
void insert(struct node **,struct node**);
struct node
{
	char data;
	struct node *left,*right;
}*first=NULL,*start=NULL;
int main()
{
	char *a,*b;int l;
	a=(char*)malloc(50*sizeof(char));
	b=(char*)malloc(20*sizeof(char));
	printf("\nenter ur string\n");
	fflush(stdin);
	gets(a);
	create(a,&first);
//	print(&first);
	printf("\nenter string2\n");
	fflush(stdin);
	gets(b);
 	create(b,&start);
	printf("\n");
	insert(&first,&start);
	print(&first);
	getch();
}
void create(char *a,struct node **first)
{ 
	struct node *temp=*first;
  do
  {
  struct node *nn,*temp=*first;	
  nn=(struct node*)malloc(sizeof(struct node));
  if(*first==NULL)
	{
		nn->data=*a;
		nn->left=NULL;
		nn->right=NULL;
	   	*first=nn;
		a++;
		temp=*first;
	}
	else
	{
	   while(temp->right!=NULL)
	   temp=temp->right;
		nn->data=*a;
		nn->right=NULL;
		nn->left=temp;
		temp->right=nn;
		temp=nn;			
		a++;
	}
	}while(*a!='\0');

}

void print(struct node **first)
{
	struct node *temp=*first;
	while(temp!=NULL)
{
	printf("%c",temp->data);
    temp=temp->right;
}
}
void insert(struct node **first,struct node **start)
{   
	int key,count=1;
	struct node *temp=*first;
	struct node *curr=*start;
	printf("\nenter where to insert\n");
	scanf("%d",&key);
	while(count<key)
	{
	temp=temp->right;
	count++;
}
	while(curr->right!=NULL)
	curr=curr->right;
	curr->right=temp->right;
	temp->right->left=curr;
	curr=*start;
	temp->right=curr;
	curr->left=temp;
}
