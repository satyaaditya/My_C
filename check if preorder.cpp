#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
int ispreorder(int *, int);
int main() {
	int t;
	scanf("%d", &t);
	while (t>0){
		int n;
		scanf("%d", &n);
		int *arr = (int*)calloc(n, sizeof(int));
		for (int i = 0; i<n; i++)
			scanf("%d", &arr[i]);
		if (ispreorder(arr, n))
			printf("1\n");
		else
			printf("0\n");
		t--;
	}
	return 0;
	
}
int ispreorder(int *arr, int n){
	int stack[40];
	int top = -1, pop = -1;
	int root = INT_MIN;
	for (int i = 0; i < n; i++){
		if (arr[i] < root)
			return 0;
		while (top != pop && arr[i] > stack[top]){
			root = stack[top];
			pop += 1;
		}
		top += 1;
		stack[top] = arr[i];
	}
	return 1;
}
