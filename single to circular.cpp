#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node* create(struct node*);
void display(struct node*);
void display1(struct node*);
struct node*convert(struct node*);
struct node
{
	char data;
	struct node *next;

};
int main()
{
   struct node *start=NULL,*temp,*f,*k,*m;
 f= create(start);
   display(f);
  f=convert(f);
   printf("\nthe circular one is\n");
   display1(f);
 		getch();		
	return 0;
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
	scanf("%c",&nn->data);
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
		printf("\n%c",temp->data);
		temp=temp->next;
	}
}
struct node* convert(struct node *start)
{
	struct node *temp=start;
	while(temp->next!=NULL)
	temp=temp->next;
	temp->next=start;
	return start;
}
void display1(struct node*start)
{
	struct node*temp=start;
	do
	{
		printf("%c",temp->data);
		temp=temp->next;
	}while(temp!=start);
}

