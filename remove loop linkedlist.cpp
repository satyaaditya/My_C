#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node* create(struct node*,int);
void display(struct node*);
struct node* connect(struct node*, int);
struct node*removeTheLoop(struct node*);
struct node{
	int data;
	struct node* next;
};
int main(){
	int t = 0;
	scanf("%d", &t);
	while (t-- > 0){
		int n = 0;
		scanf("%d", &n);
		struct node *head = NULL;
		head = create(head, n);
		display(head);
		int x = 0;
		printf("\nwhere to connect");
		scanf("%d", &x);
		head=connect(head, x);
		removeTheLoop(head);
		display(head);
	}

	getch();

}
struct node* create(struct node *start,int n)
{
	struct node *temp, *nn;
	char ch;
	while (n-->0)
	{
		nn = (struct node*)malloc(sizeof(struct node));
		printf("\nenter data");
		fflush(stdin);
		scanf("%d", &nn->data);
		if (start == NULL)
		{
			nn->next = NULL;
			start = nn;
		}
		else
		{
			temp = start;
			nn->next = NULL;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = nn;
		}
	}
	return start;
}
void display(struct node *start)
{
	struct node *temp = start;
	while (temp != NULL)
	{
		printf("\n%d", temp->data);
		temp = temp->next;
	}
}
struct node*connect(struct node*head, int con){
	if (con == 0)
		return head;
	struct node *loop = NULL;
	int count = 1;
	struct node *temp = head;
	while (temp->next != NULL){
		if (count == con)
			loop = temp;
		temp=temp->next; 
		count++;
	}
	temp->next = loop;
	return head;
}
struct node* removeTheLoop(struct node* list){
	struct node *head2 = NULL, *temp2 = NULL, *temp = list, *cur = list,*prev=list;
	while (temp != NULL){
		temp = cur->next;
		cur->next = NULL;
		if (head2 == NULL){
			head2 = cur;
			temp2 = head2;
			cur = temp;
		}
		else{
			temp2->next = cur;
			temp2 = temp2->next;
			cur = temp;
		}
		cur = temp->next;
		free(prev);
		prev = temp;
	}
	return head2;
}