#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display();
void create();
void ins_first();
void ins_last();
void ins_after();
struct node
{
 int data;
 struct node *next,*prev;	
}*start=NULL;
	struct node *new_node,*temp;
void create()
{
int ch;
	do
	{
		new_node=(struct node*)malloc(sizeof(struct node));
		if(start==NULL)
		{
			printf("\nenter value to be inserted");
		scanf("%d",&new_node->data);
			start=new_node;
			start->prev=NULL;
			start->next=NULL;
		}
	else
	{
		while(1)
		{
			printf("\nwhere to insert\n1.ins_first 2.ins_last 3.ins_ after 4.exit ");
			scanf("%d",&ch);
			switch(ch)
		{
			case 1 : ins_first();
			        	break;
	//		case 2 : ins_last();
			//  break;
	//		case 3 : ins_after();
		//	 break;
			case 4 : display();
		}	
		}
	}
	printf("do u want to create another node");
	ch =getch();
	}while(ch!='n');
		
}
void ins_first()
{
	printf("\nenter value to be inserted");
		scanf("%d",&new_node->data);
	new_node->next=start;
	start->prev=new_node;
	start=new_node;
	start->prev=NULL;

}
void display()
{
temp=start;
while(temp->next!=NULL)
{
	printf("\t%d",temp->data);
	temp=temp->next;
}	
exit(0);
}
int main()
{
create();
display();
getch();
}
