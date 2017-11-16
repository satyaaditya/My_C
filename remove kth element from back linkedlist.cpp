#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(struct ListNode *);
struct ListNode*create_linked_list(struct ListNode* );
struct ListNode * removeNthFromEnd(struct ListNode*,int);
struct ListNode{
	int data;
	struct ListNode *next;
};
int main(){
	struct ListNode *head = NULL;
	head = create_linked_list(head);
	printf("\nenter n");
	int n;
	scanf("%d", &n);
	head=removeNthFromEnd(head, n);
	display(head);
	getch();
	
}
struct ListNode*create_linked_list(struct ListNode* head){
	struct ListNode *temp, *nn;
	char ch;
	do
	{
		nn = (struct ListNode*)malloc(sizeof(struct ListNode));
		printf("\nenter data");
		fflush(stdin);
		scanf("%d", &nn->data);
		if (head == NULL)
		{
			nn->next = NULL;
			head = nn;
		}
		else
		{
			temp = head;
			nn->next = NULL;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = nn;
		}
		printf("\ndo uwant to create another ListNode");
		ch = getch();
	} while (ch != 'n');
	return head;
}
void display(struct ListNode *head){
	struct ListNode *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

struct ListNode * removeNthFromEnd(struct ListNode* head,int n){
	if (head == NULL)
	 	return NULL;
	else{
		struct ListNode *temp = head,*prev=head,*cur=head;
		int i = 1;
		while (i < n)
		{
			temp = temp->next;
			i++;
		}
		while (temp->next != NULL){
			temp = temp->next;
			prev = cur;
			cur = cur->next;
		}
		if (cur == head)
		{
			head = head->next;
			return head;
		}
		if (cur->next == NULL){
			prev->next = NULL;
			return head;
		}
		
		else{
			prev->next = cur->next;
			cur->next = NULL;
			return head;
		}
	}
}