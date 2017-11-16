#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<limits.h>
int * get_2min_elements(int *, int );
int main(){
	printf("enter size of arry");
	int n;
	scanf("%d", &n);
	int *arr = (int *)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	int *res = get_2min_elements(arr, n);
	printf("first min %d\n second min  %d\nthird  %d", res[0], res[1],res[2]);
	getch();
	free(arr);
}
int * get_2min_elements(int *arr, int len){
	int *res = (int*)calloc(3, sizeof(int));
	res[0] = res[1] =res[2]= INT_MAX;
	for (int i = 0; i < len; i++){
		if (arr[i] <= res[0]){
			res[2] = res[1];
			res[1] = res[0];
			res[0] = arr[i];
		}
		else if (arr[i] < res[1] && arr[i] != res[0]){
			res[2] = res[1];
			res[1] = arr[i];
		}
		else if (arr[i] < res[2] && arr[i] != res[0] && arr[i] != res[1])
			res[2] = arr[i];
	}
	return res;
}