#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int r, i = 0, j = 1, count = 0, n,k;
	printf("\nenter n value");
	scanf("%d", &n);
	if (n == 0)
		printf("insomania");
	else {
		while (count < 10)
		{
			r= n * j++;
			while (r > 0)
			{
				k = r % 10;
				if (!(i & 1 << k))
				{
					i = i | 1 << k;
					count++;
					if (count == 10)
						printf("%d is the last number", (j-1)*n);
				}
				r = r / 10;
			}
		}
	}
	getch();
}