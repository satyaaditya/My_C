#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char* fun(char*,int,int);
int main()
{	
	char *a=(char*)malloc(100*sizeof(char));
	int n,k;
	scanf("%d%d",&n,&k);
	a=fun(a,n,k);
	puts(a);
	getch();	
	return 0;
}
char* fun(char *a,int n,int k)
{	
	int i=0,m,r,r1;
		while(n>0)
	{
		r1=n%10;
		r=r*10;
		r=r+r1;
		n=n/10;
	}
	n=r;r1=0;
	while(k>=0)
	{	m=n;
	while(m>0)
	{	r1++;
		r=m%10;
		m=m/10;
		a[i++]=r+'0';
	}
	k--;a[r1]='\0';
	}
	return a;	
}
