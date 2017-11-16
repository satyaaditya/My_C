/* this page contain creeation of bst with a unsorted array (randomised bst) and
finding height of bst and min height of bst*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left = NULL, *right = NULL;
};
int height_of_bst(struct node *root){
	if (root == NULL)
		return -1;
	int left_subtree_height = height_of_bst(root->left);
	int right_subtree_height = height_of_bst(root->right);
	if (left_subtree_height > right_subtree_height)
		return left_subtree_height + 1; // return max height from right part and left part
	else
		return right_subtree_height + 1;
}

int * get_inorder(struct node *root, int *arr, int*index){
	if (root){
		get_inorder(root->left, arr, index);
		arr[*index] = root->data;
		*index += 1;
		get_inorder(root->right, arr, index);
		return arr;
	}
}




int minheightofbst(struct node *root){
	if (root == NULL)
		return -1;
	int left_subtree_height = height_of_bst(root->left);
	int right_subtree_height = height_of_bst(root->right);
	if (left_subtree_height > right_subtree_height)
		return right_subtree_height+1; // return  min height from right part and left part
	else
		return left_subtree_height + 1;
}

struct node * create_node(int key){
	struct node *nn = (struct node*)calloc(1, sizeof(struct node));
	nn->data = key;
	return nn;
}

struct node * create_bst_wrapper(struct node *root, struct node *node_to_be_attached){
	if (root == NULL)
	{
		root = node_to_be_attached;
		return root;
	}
	else{
		if (root->data > node_to_be_attached->data)
			root->left = create_bst_wrapper(root->left, node_to_be_attached);
		else
			root->right = create_bst_wrapper(root->right, node_to_be_attached);
		return root;
	}
}


struct node*create_bst(int *arr, int len){
	struct node *root = NULL;
	for (int i = 0; i < len; i++){
		struct node *new_node = create_node(arr[i]);
		root = create_bst_wrapper(root, new_node);
	}
	return root;
}

void print_inorder(struct node *root){
	if (root){
		print_inorder(root->left);
		printf(" %d", root->data);
		print_inorder(root->right);
	}
}
 
int  get_inorder_sum(struct node *root){
	if (root == NULL)
		return 0;
	else{
		int sum = get_inorder_sum(root->left);
		sum += get_inorder_sum(root->right);
		sum += root->data;
		return sum;
	}
}

int getCountOfNode(struct node *root, int l, int h)
{
	if (root == NULL)
		return 0;
	int count = getCountOfNode(root->left, l, h);
	count += getCountOfNode(root->right, l, h);
	if (root->data >= l && root->data <= h)
		count += 1;
	return count;
}