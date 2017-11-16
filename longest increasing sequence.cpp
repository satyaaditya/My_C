#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int get_lis(int *arr, int n){
	int *lis = (int*)calloc(n, sizeof(int));
	for (int k = 0; k < n; k++)
		lis[k] = 1;
	int count = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++){
			if (arr[j]<arr[i] && lis[j] + 1 >lis[i])
			{
				lis[i] = lis[j] + 1;
				if (count < lis[i])
					count = lis[i];
			}
		}
	}
	return count;
}

int main(){
	int n;
	printf("enter size of array :::  ");
	scanf("%d", &n);
	int *arr = (int*)calloc(n, sizeof(int));
	printf("enter elements in to array\n");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("\nlength of longest subsequence is :: %d", get_lis(arr, n));
	getch();
}
