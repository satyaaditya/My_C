#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void sort(int*, int, int);
int main()
{
	int n;
	int *a = (int*)malloc(20 * sizeof(int));
	printf("enter size of array");
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
		scanf("%d", &a[i]);
	int k = a[0], m=0,i=0;
	sort(a, 0, n );
	m = abs(a[i] - a[i + 1]);
	while (i < n-1)
	{
		
		if (m>= abs(a[i] - a[i + 1]))
		{
			m = abs(a[i] - a[i + 1]);
		}
		i++;
	}
	printf("%d is the min difference", m);
	getch();
}
void sort(int *a, int i, int n)
{
	for (i = 0;i<n;i++)
	{
		int k;
		for (int j = 0;j<n - i - 1;j++)
		{
			if (a[j]>a[j + 1])
			{
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
	}

}