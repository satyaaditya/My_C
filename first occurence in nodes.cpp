#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node* create(struct node*);
void display(struct node*);
void detect(struct node*,struct node*);
struct node
{
	int data;
	struct node *next;

};
int main()
{
	struct node *start=NULL,*first=NULL;
	start=create(start);
	printf("\n enter second list");
	first=create(first);
	detect(start,first);
	getch();
	return 0;
}
struct node* create(struct node*start)
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

void display(struct node *temp)
{
	while(temp->next!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
void detect(struct node*start,struct node*first)
{
	struct node *temp=start,*cur=first;
	while(temp!=NULL)
	{
		if(temp->data==cur->data)
		{
		printf("%d is the first ooccurence",temp->data);
		exit(0);
	}
		else if(temp->data>cur->data)
		cur=cur->next;
		else
		temp=temp->next;
	}
	printf("there is no such common occureence");
}
