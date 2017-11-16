#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
long long multiplyTwoLists(node*, node*);
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *head = NULL; 
	head = create_linked_list(head);
	getch();

}
long long  multiplyTwoLists(node* l1, node* l2)
{
	long long x1 = 0,x2=0;
	while (l1 != NULL || l2 != NULL){
		if (l1!=NULL)
		x1 = (x1 * 10 + ((l1->data) % 1000000007)) % 1000000007;
		if (l2!=NULL)
		x2 = (x2 * 10 + ((l2->data) % 1000000007)) % 1000000007;
		l1 = l1->next;
		l2 = l2->next;
	}
	x1 = ((x1 % 1000000007)*(x2 * 1000000007)) % 1000000007;
	return x1;
}
struct node*create_linked_list(struct node* head){
	struct node *temp, *nn;
	char ch;
	do
	{
		nn = (struct node*)malloc(sizeof(struct node));
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
		printf("\ndo uwant to create another node");
		ch = getch();
	} while (ch != 'n');
	return head;
}