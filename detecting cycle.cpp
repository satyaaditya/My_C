#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node* create(struct node*);
void detect(struct node*);
struct node
{
	char data;
	struct node* next;
};
int main()
{
	struct node *start=NULL;
	start=create(start);
	detect(start);
	getch();
	return 0;
}
struct node* create(struct node*start)
{	
	int s=0;char l;
	 struct node *temp,*nn,*cur;
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
		temp=start;	
		cur=start;
  	}
  else
  {
  
   printf("\n1.ntlast node 2.last");
   scanf("%d",&s);
   switch(s)
   {
    case 1:
    {
       	temp->next=nn;
   		temp=nn;
	   	break;
    }
    case 2:
    	{
    		printf("\nEnter to where link cycle");
    		fflush(stdin);
			scanf("%c",&l);
    		temp->next=nn;
    		temp=nn;
			while(cur->data!=l)
    		cur=cur->next;
    		temp->next=cur;
    		goto x;
    	}
}
}
   printf("\ndo uwant to create another node");
 	fflush(stdin);
   ch=getch();
  }while(ch!='n');
 x:return start;
}
void detect(struct node *start)
{
	struct node *cur=start,*temp=start;
	int i=0;
	while(1)
	{
		if(i<2)
	{
		temp=temp->next;
		i++;
	}
		else
		{
			if(temp==cur)
			{
			printf("cycle is present");
			exit(0);
			}
			else
			{
				cur=cur->next;
				i=0;
			}
		}
	}
}
