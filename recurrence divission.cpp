#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,d,r;
	int a[10]={0};
	printf("enter numerator and denominator\n");
	scanf("%d%d",&n,&d);int i=0;
	if(n%d==0)
	{
	x:	printf("no recurrence");
		exit(0);
	}
	while(n!=0&&i<10)
	{	
		r=n/d;	
		a[i++]=r;
		r=n%d;
		n=r*10;
	}
	r=a[1];
	for(i=2;i<10;i++)
	{	
		if(a[1]!=a[i])
		{	
			if(a[i+1]==0)
			goto x;
			r=r*10;
			r=r+a[i];
			if(a[i+1]==a[1])
			break;
		}
	}
	printf("%d",r);
}
