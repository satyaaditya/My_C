/*check whether a binary tree and its mirror are equal or not 
function tobe checked """"""""""check_equality"""""*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left = NULL, *right = NULL;
};

struct queue1{
	int front = -1;
	int rear = -1;
	int size;
};

struct node* create_node(int key){
	struct node *nn = (struct node *)calloc(1, sizeof(struct node));
	nn->data = key;
	return nn;
}


struct node * create_binary_tree(struct node *root){
	struct queue1 *queue = (struct queue1*)calloc(1, sizeof(struct queue1));
	printf("\nenter size of arr :: ");
	scanf("%d", &queue->size);
	struct node **arr = (struct node**)calloc(queue->size, sizeof(struct node*));
	for (int i = 0; i < queue->size; i++){
		int n;
		scanf("%d", &n);
		arr[i] = create_node(n);
	}
	int i = 0;
	bool left_flag = 0;
	while (i < queue->size){
		if (root == NULL){
			root = arr[i];
			
		}
		else{
			if (!left_flag){
				arr[queue->rear]->left = arr[i];
				left_flag = 1;
			}
			else{
				arr[queue->rear]->right = arr[i];
				left_flag = 0;
				queue->rear += 1;
			}
		}
		i++;
	}
	return arr[queue->front];
}

bool check_equality(struct node *root1, struct node *root2){
	if (root1 == NULL && root2 == NULL)
		return true;
	else if (root1 != NULL && root2  != NULL){
		if (root1->data == root2->data &&	check_equality(root1->left, root2->right) && check_equality(root1->left, root2->right))
			return true;
		else
			return false;
	}
	return false;
}

void inorder(struct node *root){
	if (root)
	{
		inorder(root->left);
		printf(" %d ", root->data);
		inorder(root->right);
	}
}

int main(){
	struct node *root1 = NULL,*root2=NULL;
	root1 = create_binary_tree(root1);
	root2 = create_binary_tree(root2);
	if (check_equality(root1, root2))
		printf("equal");
	else
		printf("not equal");
	getch();
}
