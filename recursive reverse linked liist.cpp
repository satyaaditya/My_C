#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node* create(struct node*);
void display(struct node*);
struct node* reverse(struct node*,struct node*,struct node*);
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
    temp=f;k=f;m=f;
  m=  reverse(f,temp->next,m);
   	 k->next=NULL;
		display(m);
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
struct node* reverse(struct node*start,struct node *temp,struct node *k)
{ 
    if(temp!=NULL)
    {
	struct node *cur;
  	cur=temp->next;
 	temp->next=start;	
 	k=temp;
   return  reverse(temp,cur,k);
}
}
