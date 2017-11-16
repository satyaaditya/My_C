#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct test{
	int arr1[50];
	int arr2[50];
	int arr_len;
	bool are_identical;
};
struct node{
	int data;
	struct node *next;
};
struct test cases[15] = {
	{ { 1, 2, 3 }, { 2, 1, 3 }, 3, true }, { { 1,1,1 }, {1,2,3},3,false },
	{ {}, {}, 0, true }, { { -1, -2, -3 }, { 1, 2, 3 }, 3, false }, { { 9, 8, 7 }, {7,8,9},3,true },
	{ { 1, 1, 1, 1, 1 }, { 2, 2, 2, 2, 1 }, 5, false }, { { 1, 1, 2, 2 }, { 2, 1, 2, 1 }, 4, true },
	{ NULL, NULL, 0, true }, { { 1, 2, 3 }, { 1, 2, 4 }, 3, false }
};
int main(){
	for (int i = 1; i <= 8; i++){
		if (fun(cases[i].arr1, cases[i].arr2, cases[i].arr_len)==cases[i].are_identical)
			printf("test %d passes", i);
		else
			printf("test %d failed", i);
	}
	getch();

}
bool fun(int *arr1, int *arr2, int len){
	 
}
void mat_mul(int **mat1, int **mat2, int row1, int row2, int col1, int col2){
	if (col1 != row2){
		printf("invalid matrix");
		return;
	}
	else{
		int **res = (int**)calloc(row1, sizeof(int*));
		for (int i = 0; i < row1; i++)
			res[i] = (int*)calloc(col2, sizeof(int));
		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < col2; j++){
				{
					for (int k = 0; k < col1; k++){
						res[i][j] += mat1[i][k] * mat2[k][j];
					}				
				}
			}
		}
	}
}
struct node* funn(struct node *head){
	struct node *pres = head, *prev = head;
	while (pres != NULL){
		if (pres->data < 0){
			prev->next = pres->next;
			pres->next = head;
			head = pres;
			pres = prev->next;
		}
		prev = pres;
		pres = pres->next;
	}
	return head;
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