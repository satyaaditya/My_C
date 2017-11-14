#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(struct node*);
struct node*create(struct node*);
void search(struct node*);
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *start=NULL;
	start=create(start);
	display(start);
 	search(start);
	getch();
}
struct node* create(struct node *start)
{
	struct node *temp,*nn;
	int y;
	do
	{
		nn=(struct node*)malloc(sizeof(struct node));
		printf("\nenter data");
		scanf("%d",&nn->data);
		fflush(stdin);
		if(start==NULL)
		{
			nn->next=NULL;
			start=nn;;
		    temp=start;
		}
		else
		{
		 	nn->next=NULL;
		 	temp->next=nn;
		 	temp=nn;
		}
		printf("\ndo u want to create another node");
		y=getch();
	}while(y!='n');
	return start;
} 
void display(struct node *start)
{
	while(start!=NULL)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
void search(struct node*start)
{
	int count=0,k;
	struct node *temp=start,*cur,*j,*t;
    while(temp->next!=NULL)
	{
		count=0;
		j=temp;
		cur=temp->next;
		k=temp->data;
		while(cur!=NULL)
		{
			if(k==cur->data)
			{
			count++;
			j->next=cur->next;
			t=cur;
			cur=cur->next;
			free(t);
			j=cur;
			continue;
			}
			j=cur;
			cur=cur->next;
		}
		if(count>0)
		printf("\n duplicate number:%d,repeated %d times",k,count);
	    temp=temp->next;
	    if(j==NULL)
	    exit(0);
	} 
}
