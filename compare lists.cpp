#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node1* create(struct node*);
void display(struct node*);
void compare(struct node1*,struct node1*);
struct node
{
	char data;
	struct node *next;

};
struct node1
{
	struct node* a;
	int l;
};
int main()
{
   struct node *start=NULL,*first=NULL;
   struct node1 *a1,*b;
  a1= create(start);
   b=create(first);
   display(a1->a);
   printf("\n");
    display(b->a);
  compare(a1,b);
	 getch();		
	return 0;
	}

struct node1* create(struct node *start)
{ 
  struct node *temp,*nn;struct node1 *p;
  p=(struct node1*)malloc(sizeof(struct node1));
  int ch,count=0;
  do
  {
        nn=(struct node*)malloc(sizeof(struct node));
	 printf("\nenter data");
	fflush(stdin);
	scanf("%c",&nn->data);
  	if(start==NULL)
  	{
  	 	nn->next=NULL;
		start=nn;count++;	
  	}
    else
    {
    	temp=start;
       	nn->next=NULL;
    	while(temp->next!=NULL)
    	temp=temp->next;
    	temp->next=nn;
    	count++;
    }
   printf("\ndo uwant to create another node");
   ch=getch();
  }while(ch!='n');
p->a=start;
p->l=count;
return p;
}
void display(struct node *start)
{
	struct node *temp=start;
	while(temp!=NULL)
	{
		printf(" %c ",temp->data);
		temp=temp->next;
	}
}
void compare(struct node1*a1,struct node1*b)
{
  if(a1->l!=b->l)
  {
  	printf("\nlists are not equal");
  	exit(1);
  }	
  else
  {
  	struct node *start=a1->a,*first=b->a;
  	while(start->next!=NULL||first->next!=NULL)
  	{
  		if(start->data==first->data)
  		{
  			start=start->next;
  			first=first->next;
  		}
  		else
  		{
  			printf("\nlists are not eqqual");
  			exit(0);
  		}
  	}
  }
}

