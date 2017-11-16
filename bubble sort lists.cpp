#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node * insert(struct node*, int);
void print(struct node*);
void sort(struct node*);
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *head = NULL;
	head=insert(head, 5);
	head=insert(head, 6);
	head=insert(head, 1);
	head=insert(head, 2);
	print(head);
	sort(head);
	print(head);
	getch();
	return 0;
}
struct node* insert(struct node *start, int a){
	struct node *cur = start;
	struct node*nn = (struct node*)malloc(sizeof(struct node));
	if (start == NULL){
		nn->data = a;
		nn->next = NULL;
		start = nn;
	}
	else{
		while (cur->next != NULL)
			cur = cur->next;
			nn->data = a;
			nn->next = NULL;
			cur->next = nn;
			nn->next = NULL;
	}
	return start;
}
void print(struct node* head)
{
	struct node *start = head;
	while (start != NULL){
		printf("  %d", start->data);
		start = start->next;
	}
}
void sort(struct node *head){
	struct node *start = NULL, *cur = head; bool flag = true;
	while (flag){
		while (cur->next != start){
			if (head == start){
				flag = false;
				break;
			}
			else{
				if (cur->data > cur->next->data){
					int k = cur->data;
					cur->data = cur->next->data;
					cur->next->data = k;
				}
				cur = cur->next;
			}
		}
		start = cur;
		cur = head;
	}
}