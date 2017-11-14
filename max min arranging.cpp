#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int[], int, int);
int max(int[], int, int);
int min(int[], int, int);
void swap(int[], int, int);
int main()
{
	int n;
	printf("enter size of array");
	scanf("%d", &n);
	int a[12];
	printf("\nentter elements");
	for (int i = 0;i < n;i++)
		scanf("%d", &a[i]);
	fun(a, 0, n - 1);
	getch();
}
void fun(int a[], int m, int n)
{
	int i = 0, p, q;
	while (i <n)
	{
		if (i<n) {
			p = max(a, i + 1, n);
			swap(a, i, p);
			i++;
		}
		if (i<n) {
			q = min(a, i + 1, n);
			swap(a, i, q);
			i++;
		}
	}
	for (i = 0;i <= n;i++)
		printf(" %d ", a[i]);
}
int max(int a[], int m, int n)
{
	int i, k;
	i = m;
	k = a[m];
	while (m <= n)
	{
		if (k <= a[m])
		{
			k = a[m];
			i = m;
		}
		m++;
	}
	return i;
}
int min(int a[], int m, int n)
{
	int i = m, k;
	k = a[m];
	while (m <= n)
	{
		if (k >= a[m])
		{
			k = a[m];
			i = m;
		}
		m++;
	}
	return i;
}
void swap(int a[], int i, int p)
{
	int temp = a[i];
	a[i] = a[p];
	a[p] = temp;
}