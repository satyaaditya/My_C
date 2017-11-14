#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;long int k;
  x:scanf("%d",&n);
	if(n<1||n>1000)
	{
		printf("not possible");
		goto x;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			y:scanf("%d",&k);
			if(k<2||k>100000000)
			{
					printf("not possible");
					goto y;
			}
			else
			{
				printf("\n%d",k/2+1);
		}}
	}
return 0;
}
