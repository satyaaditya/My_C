#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node* circle(struct node*);
void merge(struct node*, struct node*, struct node*, struct node*);
void display(struct node *);
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *list1 = NULL,*list2=NULL,*last1=NULL,*last2=NULL;
	list1= circle(list1);
	printf("\n");
	display(list1);
	last1 = list1;
	while (last1->next != list1)
		last1 = last1->next;
	printf("\n enter elements in list2");
	list2 = circle(list2);
	printf("\n");
	display(list2);
	last2 = list2;
	while (last2->next != list2)
		last2 = last2->next;
	last2->next = NULL;
	merge(list1, list2, last1, last2);
	getch();

}
struct node* circle(struct node *start)
{
	char y;
	struct node *temp = NULL;
	do
	{
		struct node *nn = (struct node*)malloc(sizeof(struct node));
		printf("\nenter data");
		scanf("%d", &nn->data);
		if (start == NULL)
		{
			start = nn;
			start->next = start;
			temp = start;
		}
		else
		{
			temp->next = nn;
			nn->next = start;
			temp = nn;
		}
		printf("do u want tocreate another node");
		 y = getch();
	} while (y != 'n');
	return start;
}
void display(struct node *start)
{
	struct node *temp = start,*cur=start;
	bool f=false;
	while (cur->next != start)
	{
		if (f)
			cur = cur->next;
		printf(" %d ", temp->data);
		temp = temp -> next;
		f = true;
	}

}
void merge(struct node *list1, struct node *list2, struct node*last1, struct node*last2)
{
	struct node *temp1 = list1, *temp2 = list2, *cur1=list1, *cur2=list2;
	struct node *prev1 = temp1, *prev2 = temp2;
	while (temp2!=NULL)
	{
		if (temp1->data <= temp2 -> data)
		{
			while (temp1->data < temp2->data&&temp1!=last1)
			{
				prev1 = temp1;
				temp1=temp1->next;
			}
			if (temp1->data > temp2->data)
			{
				
				temp2 = cur2->next;
				cur2->next = prev1->next;
				prev1->next = cur2;
				temp1 = cur2;
				cur2 = temp2;
				
			}
			else if (temp1->data <= temp2->data)
			{
				bool f = false;
				if (temp1 == last1)
					f = true;
				temp2 = cur2->next;
				cur2->next = temp1->next;
				temp1->next = cur2;
				temp1 = cur2;
				cur2 = temp2;
				if (f)
					last1 = temp1;
			}
		}
		else if (temp1->data > temp2->data)
		{
			temp2 = cur2->next;
			cur2->next = temp1;
			temp1 = cur2;
			last1->next = temp1;
			list1 = temp1;
			cur2 = temp2;
		}
	}
	printf("\nnew meged list is \n:::");
	display(list1);
}
