#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	return (*(int*)a - *(int*)b);
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, k;
		scanf("%d%d", &n, &k);
		int *arr = (int*)calloc(n, sizeof(int));
		for (int i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		qsort(arr, n, sizeof(int), cmp);
		printf("%d\n", arr[(n + k) / 2]);
	}
}