//find element that appear,once in aan array where remaining appear twice
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int find_element(int*, int);
struct node {
	int arr[20];
	int len;
	int expected;
};
int main(){
	struct node res[5] = {
		{ { 1, 1, 2 }, 3, 2 }, { { 0, 0, 1, 2, 1 }, 5, 2 }, { NULL, 5, NULL }, {{ 1, 2, 1, 3, 3 }, -5, NULL },
		{ { 1, 2, 3, 4, 3, 2, 1, 4, 5 }, 9, 5 }};
	for (int i = 0; i < 5; i++){
		if (find_element(res[i].arr, res[i].len) == res[i].expected)
			printf("\n%d testcase passed", i + 1);
	}
	getch();
}
int find_element(int *arr, int len){
	if (arr == NULL || len < 3)
		return NULL;
	int element = 0;
	for (int i = 0; i < len; i++)
		element = element^arr[i];
	return element;
}