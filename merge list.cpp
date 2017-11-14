#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node* create(struct node*);
void display(struct node*);
struct node* merge(struct node*,struct node*);
struct node* iaft(struct node*,struct node*,struct node*);
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
	printf("\nenter list2");
	b=create(b);
	display(a);
	printf("\nlist2 is");
	display(b);
	printf("\n\n");
	a=merge(a,b);
	display(a);
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
struct node* merge(struct node *a,struct node *b)
{
	struct node *temp=a,*start=a,*cur=b,*prev,*h;
  x:if(cur!=NULL)
	{
		if(cur->data>=temp->data)
		{
		while(cur->data>=temp->data&&temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;		
		}
		if(temp->next==NULL&&temp->data<cur->data)
	    {
	   		h=cur->next;
		   iaft(temp,cur,a);
			cur=h;
		}
		else
		{
		   h=cur->next;
		   a=iaft(prev,cur,a);
			temp=prev;
			cur=h;
		}
	    }	
		else if(cur->data<temp->data)
		{
		   h=cur->next;
		   cur->next=temp;
		   temp=cur;
		   start=cur;	
			cur=h;
		}
	 goto x;
	}
display(start);
}
struct node* iaft(struct node*temp,struct node*cur,struct node*a)
{
	cur->next=temp->next;
	temp->next=cur;
	return a;
}
