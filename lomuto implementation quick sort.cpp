#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void swap(int *arr, int i,int j)
{
	if (i==j) // Check if the two addresses are same
		return; // 9 5 4
	int k = arr[i]; 
	arr[i] = arr[j];
	arr[j] = k;
}

int * shift(int*arr, int start, int end, int key){
	for (; end > start; end--){
		arr[end] = arr[end-1];
	}
	arr[start] = key;
	return arr;
}

int partition(int *arr, int low, int high){
	if ((low >= 0) && (low < high)){
		int i = low - 1;
		int j = low;
		int pivot = high;
		while (j < pivot){
			if (arr[j] > arr[pivot]){
				j++;
			}
			else{
				i++;
				swap(arr,i,j);
				j++;
			}
		}
		int key = arr[pivot];
		arr[pivot] = arr[i + 1];
		arr[i + 1] = key;
		return i + 1;
	}
	else{
		return 0;
	}
}



void lomuto_sort(int *arr, int low,int high){
	if (low < high){
		int pivot = partition(arr,low,high);
		lomuto_sort(arr, low, pivot - 1);
		lomuto_sort(arr, pivot + 1, high);
	}
	return;
}



int main(){
	int size=0;
	printf("\nenter size of array");
	scanf("%d", &size);
	int *arr = (int*)calloc(size, sizeof(int));
	printf("\n enter elements to sort ::: ");
	for (int i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	lomuto_sort(arr,0,size-1);
	printf("\n array after sorting ::: ");
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	getch();
}