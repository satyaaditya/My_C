#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct g* create(struct node*);
void display(struct node*);
char fun(struct g*);
struct node
{
	char data;
	struct node *next;

};
struct g
{
	int k;
	struct node *l ; 
};
int main()
{
   struct node *start=NULL;
   char c;
   struct g *f;
  f=create(start);
  c=fun(f);
   printf("\nmedian is %c",c);
   getch();		
	return 0;
	}

struct g* create(struct node *start)
{ 
  struct node *nn,*temp;int i=1;
  struct g *curr ;
 curr=(struct g*)malloc(sizeof(struct g));
  char ch;
  do
  {
        nn=(struct node*)malloc(sizeof(struct node));
	 printf("\nenter data");
	fflush(stdin);
	scanf("%c",&nn->data);
  	if(start==NULL)
  	{
  		i++;
	   	nn->next=NULL;
		start=nn;	
  	}
    else
    {
    	i++;
		temp=start;
       	nn->next=NULL;
    	while(temp->next!=NULL)
    	temp=temp->next;
    	temp->next=nn;
    }
   printf("\ndo uwant to create another node");
   ch=getch();
  }while(ch!='n');
  curr->k=i/2;
  curr->l=start;
 return curr;
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
char fun(struct g *f)
{
	struct node *temp=f->l;
	int i=f->k;
	while(i>1)
{
	temp=temp->next;
	i--;
}
return temp->data;	
}	
	 	

