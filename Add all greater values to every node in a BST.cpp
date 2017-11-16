#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"bst.h"
int get_inorder_sum(struct node* );
void fill_inorder(struct node *, int *, int *, int *);
int  get_inorder_sum(struct node *root){
	if (root == NULL)
		return 0;
	else{
		int sum = get_inorder_sum(root->left);
		sum +=  get_inorder_sum(root->right);
		sum += root->data;
		return sum;
	}
}

void fill_inorder(struct node *root, int *arr, int *index, int *sum){
	if (root){
		fill_inorder(root->left, arr, index, sum);
		root->data = *sum;
		*sum = *sum - arr[*index];
		*index += 1;
		fill_inorder(root->right, arr, index, sum);
	}
}
int main(){
	struct node *root = NULL;
	int n;
	printf(" enter  size of bst ::: ");
	scanf("%d", &n);
	int *arr = (int*)calloc(n, sizeof(int));
	printf("enter elements into bst\n");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	root = create_bst(arr,n);
	int len = 0;
	arr = get_inorder(root, arr, &len);
	int sum= get_inorder_sum(root);
	int index=0;
	fill_inorder(root, arr, &index, &sum);
	print_inorder(root);
	getch();
}
