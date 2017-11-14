#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, q,q1;
	scanf("%d", &n);
	scanf("%d", &q);
	int *a = (int*)malloc(n*sizeof(int));
	int i = 0;
	while (i < n) {
		scanf("%d", &a[i]);i++;
	}
	i = 0;
	while (i < q)
	{
		scanf("%d", &q1);
		int j = 0, k = a[0],k1 = a[0];
		while (j < n) {
			if (k <= a[j])
				k = a[j];
			if (k1 >= a[j])
				k1 = a[j];
			j++;
		}
		k = k - k1 + 1;
		if (q1 <= k)
			printf("yes\n");
			printf("no\n");
		i++;
	}
}
