#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t, i = 0, n;
	scanf("%d", &t);
	while (i < t)
	{
		int c = 0, j = 0, preva = 0, cura = 0,*a,*b;
		scanf("%d", &n);
		if (n >= 1 && n <= 10000)
		{
			a = (int*)malloc(n*sizeof(int));
			b = (int*)malloc(n*sizeof(int));
			while (j < n) {
				scanf("%d", &a[j]);j++;
			}
			j = 0;
			while (j < n) {
				scanf("%d", &b[j]);j++;
			}
			j=0;
			while (j < n)
			{
				cura = a[j];
				a[j] = a[j] - preva;
				if (a[j] >= b[j])
					c++;
				preva = cura;
				j++;
			}
			printf("%d\n", c);
		}
		i++;
		free(a);free(b);
	}
}