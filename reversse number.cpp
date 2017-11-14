#include<stdio.h>
#include<conio.h>
int main()
{
	int n,s=0;
	scanf("%d",&n);
	int r;
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
		if(n>0)
		s=s*10;
	}
	printf("%d",s);
}
