#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
}

//* Definition for singly-linked list.
struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode * valberToLinkedList(int);
struct ListNode * reverseLinkedList(struct ListNode *);
struct ListNode* addTwonumbers(struct ListNode* l1, struct ListNode* l2) {
	l1 = reverseLinkedList(l1);
	l2 = reverseLinkedList(l2);
	int val1 = 0, val2 = 0;
	struct ListNode *head1 = l1, *head2 = l2;
	while (head1 != NULL && head2 != NULL){
		val1 = val1 * 10 + head1->val;
		val2 = val2 * 10 + head2->val;
		l1 = head1->next;
		l2 = head2->next;
	}
	while (head1 != NULL)
	{
		val1 = val1 * 10 + head1->val;
		head1 = head1->next;
	}
	while (head2 != NULL)
	{
		val2 = val2 * 10 + head2->val;
		head2 = head2->next;
	}
	val1 = val1 + val2;
	struct ListNode *a = valberToLinkedList(val1);
	return a;

}
struct ListNode * reverseLinkedList(struct ListNode *head) {
	if (head == NULL)
		return NULL;
	struct ListNode *temp = head, *cur = head, *k = head;
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
struct ListNode * valberToLinkedList(int n) {
	struct ListNode *start = NULL;
	if (n == 0){
		struct ListNode *nn = (struct ListNode*)malloc(sizeof(struct ListNode));
		nn->val = 0;
		nn->next = NULL;
		return nn;
	}
	if (n < 0)
		n *= -1;
	while (n > 0){
		struct ListNode *nn = (struct ListNode*)malloc(sizeof(struct ListNode));
		nn->val = n % 10;
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