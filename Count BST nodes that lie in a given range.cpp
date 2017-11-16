#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"bst.h"
int getCountOfNode(struct node *, int , int );
int main(){
	int n;
	printf("enter size of array\n");
	scanf("%d", &n);
	int *arr = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	struct node *root = NULL;
	root = create_bst(arr, n);
	int l, h;
	printf("enter range limits ::: \n");
	scanf("%d%d", &l, &h);
	int count =getCountOfNode(root, l, h);
	printf("\n%d", count);
	getch();
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