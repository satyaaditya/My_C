#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node* create(struct node*);
void display(struct node*);
struct node
{
	char data;
	struct node *next;

};
int main()
{
   struct node *start=NULL,*temp,*k,*m;
 start= create(start);
   display(start);
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
int flag=0;
	while(temp!=NULL)
	{
      if(!(flag%2))
		 printf("\n%c",temp->data);
		 flag++;
		 temp=temp->next;
			}
}
