#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t;long int n;
	scanf("%d",&t);
	if(t<1||t>10000)
	exit(0);
	while(t>0)
	{
		scanf("%ld",&n);
		if(n<1||n>1000000000)
		exit(0);
		if(n%2==0)
		printf("%ld\n",n);
		else
		printf("%ld\n",n-1);
		t--;
	}
return 0;
}
