#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node1* create(struct node*);
void display(struct node*);
void palin(struct node1*);
struct node* reverse(struct node*); 
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
   struct node *start=NULL;
   struct node1 *a1;
  a1= create(start);
   	 palin(a1);
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
void palin(struct node1* a1)
{
	int l=a1->l,i=0;
	struct node *start=a1->a,*temp=start,*first;
	if(l%2==0)
	i=1;
	while(i<(l/2))
	{
		temp=temp->next;
		i++;
	}
	first=temp->next;
	temp->next=	NULL;
	first=reverse(first);
	while(i>0)
	{
		if(start->data==first->data)
		{
			start=start->next;
			first=first->next;
			i--;
		}
		else
		{
			printf("not a palindrome");
			exit(0);
		}
	}	
	printf("\n palindrrome");
}
struct node*reverse(struct node *start)
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
 return start;
}



