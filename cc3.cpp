#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,count=0;
	long long int k,*p;
	scanf("%d%lld",&n,&k);
	if(k==0)
	{
	printf("wrong input");
	exit(0);
}
	p=(long long int*)malloc(n*sizeof(long long int));
	for(i=0;i<n;i++)
	scanf("%lld",&p[i]);
	for(i=0;i<n;i++)
	{
		if(p[i]%k==0)
		count++;
	}
printf("\n%d",count);
return 0;
}
