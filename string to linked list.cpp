#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(char*,int);
struct node
{
	char data;
	struct node *next;
}*start=NULL;
int main()
{
	struct node *temp;
	char *a;
	int n,i=0;
	printf("\nenter size of array");
	scanf("%d",&n);
	a=(char*)malloc(n*sizeof(char));
	printf("\nenter ur string");
	fflush(stdin);
	gets(a);
	fun(a,n);
	temp=start;
	while(temp!=NULL)
	{
		printf(" %c ",temp->data);
		temp=temp->next;
	}
	getch();
}
void fun(char*a,int n)
{   
 	int i=0;
	struct node *temp;
	while(i<=n)
	{
		struct node *nn;
		nn=(struct node*)malloc(sizeof(struct node));
		if(start==NULL&&i==0)
		{
		   nn->data=a[i];
		   nn->next=NULL;
		   start=nn;	
		temp=start;
		}
		else
		{
		 temp->next=nn;
		 nn->data=a[i];
		 nn->next=NULL;
		 temp=temp->next;
		}
	i++;
	}
	
}
