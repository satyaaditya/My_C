#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n=0, t, k=0;
	printf("enter t value");
	scanf("%d", &t);
	int i = 0;
	while (i < t)
	{	
		int *a;
		printf("enter n value");
		scanf("%d", &n);
		a = (int*)malloc(n*sizeof(int));
		for (int j = 0;j < n;j++)
			scanf("%d", &a[j]);
		printf("enter k value");
		scanf("%d", &k);
		int sum = 0;
		for (int j = 0;j < n;j++)
		{
			int r = a[j] % k;
			int q = a[j] / k;
			if (r != 0)
				sum += q + 1;
			else 
				sum += q;
		}
		printf("%d is the sum", sum);
		i++;
	}
	getch();
}