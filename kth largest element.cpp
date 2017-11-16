#include <iostream>
using namespace std;

void heapify(int *arr, int n, int i){
	int max = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l<n && arr[l]>arr[max])
		 max =  l;
	if (r < n && arr[r] > arr[max])
		max = r;
	if (max != i)
	{	
		swap(arr[i], arr[max]);
		heapify(arr, n, max);
	}
}


void heapsort(int *arr, int n,int k){
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);
	for (int i =0;  i < k; i++)
	{
		swap(arr[0], arr[n-1-i]);
		if (i<k-1)
			printf("%d ", arr[n - 1 - i]);
		else
			printf("%d\n", arr[n - 1 - i]);
		heapify(arr, n-1-i, 0);
	}
}

int main(){
	int t = 0;
	scanf("%d", &t);
	while (t--){
		int n = 0, k = 0;
		scanf("%d%d", &n, &k);
		int *arr = (int*)calloc(n, sizeof(int));
		for (int i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		heapsort(arr, n, k);
	}
}
