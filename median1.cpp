#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node1* create(struct node*);
void med(struct node1*);
struct node
{
	char data;
	struct node *next,*prev;
};
struct node1
{
	struct node *a;
	int i;
};
int main()
{
	struct node *start=NULL,*temp;
  	struct node1 *f;
	f=create(start);
	temp=f->a;
	while(temp!=NULL)
	{
		printf("\n%c",temp->data);
		temp=temp->next;
	}
    med(f);
	getch();
}
struct node1* create(struct node*start)
{  
	int ch,i=1;
	struct node *nn,*temp;
	struct node1 *n;
	n=(struct node1*)malloc(sizeof(struct node1));
	do
	{
		nn=(struct node*)malloc(sizeof(struct node));
		printf("\nenter data ");
		fflush(stdin);
		scanf("%c",&nn->data);
		nn->next=NULL;
		nn->prev=NULL;
		if(start==NULL)
		{
			i++;
			start=nn;
			temp=start;
		}
		else
		{
		 	temp->next=nn;
		 	nn->prev=temp;
		 	temp=temp->next;
			i++;
		}
		printf("\ndo u want to create aanother node");
		ch=getch();
	}while(ch!='n');
	n->a=start;
	n->i=i/2;
	return n;
}
void med(struct node1 *f)
{
	struct node *temp=f->a;
	int k=f->i;
	while(k>1)
	{
		temp=temp->next;
		k--;
	}
printf("\n median is %c",temp->data);
}
