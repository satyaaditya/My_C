#include<stdio.h>
#include<stdlib.h>
void quicksort(int*, int, int);
int partition(int*, int, int);
void swap(int*, int*);
int main(){
	int n = 0, m = 0, q;
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &q);
	int a[100][100];
	int i, j;
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
	}
	int z;
	for (z = 0; z < q; z++){
		int k, l, x, med = 0;
		scanf("%d", &k);
		scanf("%d", &l);
		int *b = (int*)malloc(k*l*sizeof(int));
		int p, r;
		for (p = 0; p <= m - l; p++){
			for (r = 0; r <= n - k; r++){
				int s = 0;
				for (i = r; i < r + k; i++){
					for (j = p; j < p + l; j++){
						b[s++] = a[i][j];
					}
				}
				quicksort(b, 0, k*l);
				x = b[(k *l) / 2];
				if (x > med)
					med = x;
			}
		}
		printf("%d", med);
	}

	return 0;
}
int partition(int arr[], int l, int h)
{
	int x = arr[h];
	int i = (l - 1);
	int j;
	for (j = l; j <= h - 1; j++)
	{
		if (arr[j] <= x)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[h]);
	return (i + 1);
}
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void quicksort(int* a, int l, int r){
	if (l < r)
	{
		/* Partitioning index */
		int p = partition(a, l, r);
		quicksort(a, l, p - 1);
		quicksort(a, p + 1, r);
	}
}