#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node * numberToLinkedList(int );
void print(struct node* );
struct node{
	int num;
	struct node *next;
};
int main(){
	int i;
	printf("entter number\n");
	scanf("%d", &i);
	struct node *head = NULL;
	head = numberToLinkedList(i);
	print(head);
	getch();
}
struct node * numberToLinkedList(int n) {
	struct node *start = NULL;
	if (n == 0){
		struct node *nn = (struct node*)malloc(sizeof(struct node));
		nn->num = 0;
		nn->next = NULL;
		return nn;
	}
	if (n < 0)
		n *= -1;
	while (n > 0){
		struct node *nn = (struct node*)malloc(sizeof(struct node));
		nn->num = n % 10;
		n = n / 10;
		nn->next = NULL;
		if (start == NULL){
			start = nn;
		}
		else{
			nn->next = start;
			start = nn;
		}
	}
	return start;
}
void print(struct node* head)
{
	struct node *start = head;
	while (start != NULL){
		printf("  %d", start->num);
		start = start->next;
	}
}