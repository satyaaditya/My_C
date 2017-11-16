#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int findMaxProduct(int*, int,int);
void quicksort(int*, int, int);
int partition(int*, int, int);
void swap(int*, int*);

int main(){
	int n, *a;
	printf("enter size of array");
	scanf("%d", &n);
	a = (int*)malloc(n*sizeof(int));
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("\nenteer sizeof sub arrray");
	int k;
	scanf("%d", &k);
	int x = findMaxProduct(a,n,k);
	printf("\n%d", x);
	getch();
	return 0;
}
int findMaxProduct(int *a, int n, int k){
	int maxpro = 1;
	for (int j = 0; j <= n - k; j++)
	{
		int max = 1;
		for (int i = j; i < j + k; i++){
			max *= a[i];
		}
		if (maxpro < max)
			maxpro = max;
	}
	return maxpro;
}