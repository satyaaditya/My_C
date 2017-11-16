#include<stdio.h>
//
#include<conio.h>
#include<stdlib.h>


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
void sort(int *a, int n){
	quicksort(a, 0, n);
}

int get_single_item_count(int *arr, int n,int *j){
	int count=0;
	while (arr[*j] >= 50){
		count++;
		*j -= 1;
	}
	return count;
}

int get_count(int *arr, int n, int min_limit){
	int count = 0;
	int i = 0,j=n-1;
	count = get_single_item_count(arr, n,&j);
	int limit = 0;
	while (i < j){
		limit = 0;
		bool is_j_used = false;
		while (limit<25 && i<j){
			 if (!is_j_used){
				limit += arr[j] + arr[i];
				i++; j--;
				is_j_used = true;
			}
			else if(is_j_used){
				limit += arr[i];
				i++;
			}
		}
		if (n % 2 != 0){
			if (limit < 25){
				limit += arr[n / 2];
			}
		}
		if (limit >= 25)
			count++;
	}
	return count;
}


int main(){
	int t; int l=0;
	scanf("%d", &t);
	while (l<t){
		int n;
		int max_times = 0;
		scanf("%d", &n);
		if (n != NULL){
			int * arr = (int*)calloc(n, sizeof(int));
			for (int i = 0; i < n; i++)
				scanf("%d", &arr[i]);
			sort(arr, n - 1);
			max_times = get_count(arr, n, 50);
			printf("Case #%d: %d\n", l + 1, max_times);
		}
		else
			printf("Case #%d: %d\n", l + 1, max_times);
		l++ ;
	}
}