
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"bst.h"

void make_linked_list_left(struct node *root, struct node**temp, struct node **first){
	if (root){
		make_linked_list_left(root->left, temp, first);
	if (*temp == NULL && root->left){
		root->left->right = root;
		*temp = root;
		if (!(*first))
			*first = (*temp)->left;
	}
	else if (*temp && root->left){
		(*temp)->right = root;
		*temp = NULL;
	}
	make_linked_list_left(root->right, temp, first);
	if (root->right){
		if (!(*first))
			*first = root;
		root->right->right = root;
		*temp = root->right;
	}
}
}


void make_linked_list_right(struct node* root, struct node **temp){
	if (root){
		make_linked_list_right(root->right, temp);
		if (*temp==NULL && root->right){
			root->right->left = root;
			*temp = root;
		}
		else if (*temp && root->right)
		{
			(*temp)->left = root;
			root->right = *temp;
			*temp = NULL;
		}
		make_linked_list_right(root->left, temp);
		if (root->left){
			root->left->right = root;
			*temp = root->left;
		}
	}
}

int main(){
	int *arr=NULL;
	int n;
	printf("enter size of array");
	scanf("%d", &n);
	arr = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	struct node *root = NULL;
	root = create_bst(arr, n);
	struct node *temp = NULL;
	if (root->right){
		make_linked_list_right(root->right, &temp);
		if (temp == NULL){
			root->right->left = root;
		}
		else{
			temp->left = root;
			root->right = temp;
		}
	}
	 temp = NULL;
	 struct node *first = NULL;
	 if (root->left){
		 make_linked_list_left(root->left, &temp, &first);
		 if (temp == NULL){
			 root->left->right = root;
			 first = root->left;
		 }
		 else{
			 temp->right = root;
			 root->left = temp;
		 }
	 }
	 else
		 first = root;
	 while (first){
		 printf(" %d ", first->data);
		 first = first->right;
	 }
	 getch();
}
