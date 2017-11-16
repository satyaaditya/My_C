#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int third_largest(int*, int);
void sort(int*, int);
void quicksort(int*, int, int);
int partition(int*, int, int);
void swap(int*, int*);
int main(){
	int t;
	scanf("%d", &t); int i = 0;
	while (i < t){
		int n;
		scanf("%d", &n);
		int *a = (int*)malloc(n*sizeof(int));
		for (int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int k = third_largest(a, n);
		printf("\n%d\n", k);
		i++;
		for (int i = 0; i < n; i++){
			printf("  %d", a[i]);
		}
	}
	getch();
}
int third_largest(int a[], int n){
	if (n < 3){
		return -1;
	}
	else{
		sort(a, n-1);
		return a[2];
	}
}
void sort(int *a, int n){
	 quicksort(a, 0, n);
	}
void quicksort(int *x, int first, int last){
	int pivot, j, temp, i;
	if (first<last){
		pivot = first;
		i = first;
		j = last;

		while (i<j){
			while (x[i] <= x[pivot] && i<last)
				i++;
			while (x[j]>x[pivot])
				j--;
			if (i<j){
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}

		temp = x[pivot];
		x[pivot] = x[j];
		x[j] = temp;
		quicksort(x, first, j - 1);
		quicksort(x, j + 1, last);

	}
}


void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}