#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display();
void insl(int,struct node*);
void ins();
struct node
{
	int data;
	struct node *next;
}*start=NULL;
int main()
{
	int ch;
	printf("\nenter ur choice");	
	while(1)
	{
	printf("\n1 .ins  2.display  3.exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : ins();
				break;
        	case 2 : display();
    			break;
    	case 3 : exit(0);
	}
	}
 getch();	
}
void ins()
{
	int data,ch;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nenteer data\n");
	scanf("%d",&data);
	insl(data,temp);
}
void insl(int k,struct node *temp)
{
	struct node *cur=start;
	if(start==NULL)
	{
		temp->data=k;
		start=temp;
		temp->next=	start;
	}
	else
	{
	 while(cur->next!=start)
	 cur=cur->next;
	 temp->data=k;
	 cur->next=temp;
	 temp->next=start;	
	}
return;
}
void display()
{
	struct node *temp=start,*cur=start;int f=0;
	while(cur->next!=start)
	{
		if(f>0)
		cur=cur->next;
		printf("\t%d",temp->data);
		temp=temp->next;
		f++;
	}
}





