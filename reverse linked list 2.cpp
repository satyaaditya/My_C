#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void display();
void reverse();
struct node
{
	char data;
	struct node *next;

}*start=NULL;
int main()
{
   struct node *temp;
   create();
   display();
    reverse();
   	 getch();		
	return 0;
	}

void create()
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
}
void reverse()
{
 struct node *temp=start,*cur=start,*k=start;
 temp=temp->next;
 while(temp!=NULL)
 {
 	cur=temp->next;
 	temp->next=start;
 	start=temp;
 	temp=cur;
 }
 k->next=NULL;
 temp=start;
 while(temp!=NULL)
 {
 	printf("\n%c",temp->data);
 	temp=temp->next;
 }
}
void display()
{
	struct node *temp=start;
	while(temp!=NULL)
	{
		printf("\n%c",temp->data);
		temp=temp->next;
	}
}

	

