#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void bubbleSort(struct node *);
struct node* create(struct node*);
void swap(struct node *,struct node *);
void display(struct node*);
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *a=NULL;
	printf("\nenter list1");
	a=create(a);
	bubbleSort(a);
	display(a);
	getch();
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
	scanf("%d",&nn->data);
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
		printf("\n%d",temp->data);
		temp=temp->next;
	}
}


void bubbleSort(struct node *start)
{
    int swapped, i;
    struct node *ptr1;
    struct node *lptr = NULL;
 
    /* Checking for empty list */
    if (ptr1 == NULL)
        return;
 
    do
    {
        swapped = 0;
        ptr1 = start;
 
        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            { 
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}
 
/* function to swap data of two nodes a and b*/
void swap(struct node *a, struct node *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}
