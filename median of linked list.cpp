#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void median(struct node *,struct node *);
void display(struct node*);
struct node *create(struct node*);
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *a=NULL,*b=NULL;
	printf("\nenter list1");
	a=create(a);
	printf("enter list 2\n");
	b=create(b);
	median(a,b);
	getch();
}
struct node* create(struct node *start)
{ 
  struct node *temp,*nn;
  char ch;
  do
  {
        nn=(struct node*)malloc(sizeof(struct node));
	 printf("\nenter data");
	fflush(stdin);
	scanf("%d",&nn->data);
  	if(start==NULL)
  	{
  	 	nn->next=NULL;
		start=nn;	
  	}
    else
    {
    	temp=start;
       	nn->next=NULL;
    	while(temp->next!=NULL)
    	temp=temp->next;
    	temp->next=nn;
    }
   printf("\ndo uwant to create another node");
   ch=getch();
  }while(ch!='n');
return start;
}
void display(struct node *start)
{
	struct node *temp=start;
	while(temp!=NULL)
	{
		printf("\n%d",temp->data);
		temp=temp->next;
	}
}
void median(struct node*a,struct node*b)
{
	struct node *temp=a,*cur=b;int l=0;
	while(temp!=NULL)
	{
		l++;
		temp=temp->next;
	}
	while(cur!=NULL)
	{
		l++;
		cur=cur->next;
	}
	int i=0;
l=l/2;temp=a;cur=b;
	while(i<=l)
	{
		if(temp->data>cur->data)
		{
			cur=cur->next;
			i++;
		}
		else if(cur->data>temp->data)
		{
			temp=temp->next;
			i++;
		}
		if(temp->next==NULL&&cur->next!=NULL)
		{
			while(i<=l)
			cur=cur->next;
			printf("\nmedian : %d",cur->data);
			exit(0);
		}
		else if(temp->next!=NULL&&cur->next==NULL)
		{
		while(i<=l)
			temp=temp->next;
			printf("\nmedian : %d",temp->data);
			exit(0);	
		}
	}
	(temp->data >cur->data)?(printf("\nmedian : %d",cur->data)):(printf("\nmedian : %d",temp->data));
}

