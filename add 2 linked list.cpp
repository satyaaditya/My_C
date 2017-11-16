#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node *insert(struct node*,int);
struct node* reverseLinkedList(struct node*);
void print(struct node*);
struct node {
	int data;
	struct node *next;
};
int main(){
	struct node *head1 = NULL, *head2 = NULL;
	printf(" enter node 1 elements\n");
	char ch;
	do{
		struct node *nn = (struct node*)calloc(1, sizeof(struct node));
		printf("enter data");
		int k;
		scanf("%d", &k);
		nn->next = NULL;;
		head1 = insert(nn,k);
		ch = getch();
	} while (ch != 'n');
	head1=	reverseLinkedList(head1);
	printf("enter nnode 2 elements\n");
	ch = 'k';
	do{
		struct node *nn = (struct node*)calloc(1, sizeof(struct node));
		printf("enter data");
		int k;
		scanf("%d", &k);
		nn->next = NULL;;
		head2 = insert(nn,k);
		ch = getch();
	} while (ch != 'n');
	head2 = reverseLinkedList(head2);
	printf("\n");
	print(head1);
	printf("\n");
	print(head2);

	getch();
	
}
struct node *insert(struct node* head1,int dat){
		
		if (head1 == NULL){
			head1->data = dat;
			head1->next = NULL;
			return head1;
		}
		else
		{
			struct node *cur = head1;
			while (cur->next != NULL)
				cur = cur->next;
			cur->next = head1;
			head1->data = dat;
			return head1;
		}
		
}
void print(struct node *head1){
	while (head1 != NULL){
		printf("%d ", head1->data);
		head1 = head1->next;
	}
}
struct node* reverseLinkedList(struct node*head){
		if (head == NULL)
			return NULL;
		struct node *temp = head, *cur = head, *k = head;
		temp = temp->next;
		while (temp != NULL)
		{
			cur = temp->next;
			temp->next = head;
			head = temp;
			temp = cur;
		}
		k->next = NULL;
		return head;

}
struct node *sum2linkedlist(struct node*head1, struct node*head2){
	struct node *res = NULL;
	while (head1 != NULL && head2 != NULL){
		int k = head1->data+head2->data;
		if (k > 9){
			head1->next->data += 1;
			k = k / 10;
			res=insert(res, k);
		}
		else{
			res = insert(res, k);
		}
		head1 = head1->next;
		head2 = head2->next;
	}
	if (head1 == NULL){
		while (head2 != NULL){

	
}