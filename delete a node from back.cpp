#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node* delet(struct node*);
struct node* create(struct node*);
void display(struct node*);
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
   printf("\nlist afterr deletion");
  f=delet(f); 
   display(f);
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
struct node* delet(struct node *start)
{
	int n,i=0;
	struct node *temp=start,*cur;
	printf("\nenter position to delete\n");
	scanf("%d",&n);
	while(temp!=NULL)
	{
	temp=temp->next;
	i++;
    }
    n=i-n;temp=start;
    while(n>0)
    {
    	cur=temp;
		temp=temp->next;
    	n--;
    }
    if(cur->data==NULL)
    {
	cur=temp;
	temp=temp->next;
	free(cur);
	start=temp;
	}
    else
    {
	cur->next=temp->next;
    free(temp);
	}
	return start;
}
