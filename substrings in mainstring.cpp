#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,prev=0,count=0,result=0,f=0;
	printf("enter size of array");
	scanf("%d", &n);
	printf("\nenter elements into array");
	int *a = (int*)malloc(n*sizeof(int));
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
		if (prev < a[i])
		{
			count++;
			prev = a[i];
		}
		else
		{
			if (count > 1)
			{	
					f = 1;
				result = result+((count*(count + 1) / 2) - count );
				count = 1;
				prev = a[i];
			}
			else
			{
				prev = a[i];
				count = 1;
			}
		}
	}
	if (count>1)
		result = result+((count*(count + 1) / 2) - count );

		printf("\ntottal no:of sub arrays are %d", result);
	getch();
}