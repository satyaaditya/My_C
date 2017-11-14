#include<stdio.h>
int main()
{
	long long int n,k=5,sum=0;
	int i;
	scanf("%lld",&n);
	long long int p[n];	
		for(i=0;i<n;i++)
	scanf("%lld",&p[i]);
	i=0;
	while(i<n)
	{   k=5;
	    if(p[i]<=0)
	    {
			sum=0;
	    	printf("\n%lld",sum);
			i++;
	}
		while(p[i]>=k)
		{
			sum=sum + (p[i]/k);
			k=k*5;
		}
		printf("\n%lld",sum);
		i++;sum=0;
	}
return 0;
}
