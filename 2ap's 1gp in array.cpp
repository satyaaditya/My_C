#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int *a = (int*)malloc(20 * sizeof(int));
	int i = 0, n, flag = 0, count = 0, b[6] = { 0 }, d, k, j = 0, r;
	printf("enter size of array");
	scanf("%d", &n);
	for (i = 0;i < n;i++)
		scanf("%d", &a[i]);i = 0;
	while (i < n)
	{
		count = 0;flag = 0;
		d = a[i + 1] - a[i];
		
		while (d == a[i + 1] - a[i])
		{
			
			if (count == 0)
				k = i;
				count++;
				flag = 1;
				i++;
		}
		if (count > 1 && flag == 1)
		{
				b[j++] = k;
				b[j++] = i;
		}
		 if(count>=1)
			i--;
		i++;
	}
	d = 0;k = 0;count = 0;i=0;
	while (i<n)
	{ 
	
		count = 0;
		if (a[i] == 0)
			i++;
		if (a[i+1]%a[i]==0) {
		 r = a[i + 1] / a[i]; 
			 while (r == a[i + 1] / a[i] )
			 {
				 if (count == 0)
					 flag = i;
				 count++;
				 i++;
			 }
			 if (count > 1) {
				 b[4] = flag;
				 b[5] = i;
				 break;
			 }
		 }
		 else
			 i++;
				
	}

	
	for (i = 0;i < 6;i++)
		printf(" %d ", b[i]);
	getch();
}