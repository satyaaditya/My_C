#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "util.h"

bool print_2sum(int *arr, int start,int n, int sum){
	int end = n - 1;
	while (start < end){
		if (arr[start] + arr[end] == sum){
			printf("\n  %d %d ", arr[start], arr[end]);
			return true;
		}
		if (arr[start] + arr[end] < sum)
			start++;
		else
			end--;
	}
	//printf("\nthere is no such sum in given array");
	return false;
}

void print_3sum(int *arr, int n, int sum){
	for (int i = 0; i < n - 2; i++){
		if (print_2sum(arr, i + 1, n, sum - arr[i])){
			printf("%d is sum ", arr[i]);
			return;
		}
	}
	printf("\n sum doesnt exist");
	return;
}


int main(){
	int n;
	printf("\nenter size of array :: ");
	scanf("%d", &n);
	printf("\nenter elements into array :: ");
	int *arr = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	lomuto_sort(arr, 0, n - 1);
	printf("\nelements after sort are ::\n ");
	for (int i = 0; i < n; i++)
		printf(" %d ", arr[i]);
x:	printf("\nenter sum to be checked :: ");
	int sum;
	scanf("%d", &sum);
	print_3sum(arr, n, sum);
	goto x;
}