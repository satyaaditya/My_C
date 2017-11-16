
#include <stdlib.h>
#include <stdio.h>
#include<conio.h>
#include<limits.h>
struct node* create_bst(struct node *);
void print_tree(struct node*);
struct node * attach(struct node *, struct node *);
void cal_node_to_leaf(struct node *, int, int *);
int cal_root_to_node_distance(struct node *, struct node*, int*);
int get_distance(struct node *, struct node *);
struct node{
	struct node * left=NULL;
	int data;
	struct node *right=NULL;
};
int main(){
	struct node *head = NULL;
	head=create_bst(head);
	struct node *temp = head->right->right;
	printf("\n  %d  ", get_distance(head, temp));
	getch();
}
struct node* create_bst(struct node *head){
	char ch;
	do{
		printf("\nenter data :: ");
		struct node *nn = (struct node*)calloc(1, sizeof(struct node));
		scanf("%d", &nn->data);
		head = attach(head, nn);
		ch = getch();
	} while (ch != 'n');
	return head;
}
void print_tree(struct node*head){
	if (head != NULL){
		print_tree(head->left);
		printf("%d ", head->data);
		print_tree(head->right);
	}
}
struct node* attach(struct node *head, struct node *temp){
	if (head == NULL)
	{
		head = temp;
		return head;
	}
	if (temp->data<head->data)
		head->left = attach(head->left, temp);
	else if (temp->data>head->data)
		head->right = attach(head->right, temp);
	return head;
}
int get_closest_leaf_distance(struct node *root, struct node *temp)
{
	if (root == NULL || temp == NULL)
		return -1;
	else if (temp->right == NULL && temp->left == NULL)
		return 0;
	else
		return get_distance(root, temp);
}
int get_distance(struct node *root, struct node *temp){
	int distance = INT_MAX;
	cal_node_to_leaf(temp, 0, &distance);
	cal_root_to_node_distance(root, temp, &distance);

	return distance;

}

int cal_root_to_node_distance(struct node *root, struct node *temp, int *distance){
	if (temp == root)
		return 0;
	if (root == NULL)
		return -1;
	int l = cal_root_to_node_distance(root->left, temp, distance);
	if (l != -1)
	{
		cal_node_to_leaf(root->right, l + 2, distance);
		return l + 1;
	}
	int r = cal_root_to_node_distance(root->right, temp, distance);
	if (r != -1)
	{
		cal_node_to_leaf(root->left, r + 2, distance);
		return r + 1;
	}
	return -1;
}
void cal_node_to_leaf(struct node *root, int count, int *min_count){
	if (root == NULL)
		return;
	if (root->right == NULL && root->left == NULL){
		if (*min_count > count)
			*min_count = count;
	}
	cal_node_to_leaf(root->left, count + 1, min_count);
	cal_node_to_leaf(root->right, count + 1, min_count);
}
