#include<stdio.h>
#include<stdlib.h>
#include <math.h>
struct node*fun(int*,int*,long int);
struct node
{
	int a,b;
};
int *a,*b;
int main()
{
	struct node *p;
	int i;
	long int n;
	scanf("%ld",&n);
	if(n<0||n>10000)
	exit(0);
	else
	{
		a=(int*)malloc(n*sizeof(int));
		b=(int*)malloc(n*sizeof(int));
		for(i=0;i<n;i++)
		scanf("%d%d",&a[i],&b[i]);
	}
	p=fun(a,b,n);
	printf("%d %d",p->a,p->b);
}
struct node* fun(int *a,int *b,long int n)
{
	int i=0;
	struct node *p;
	(a[i]>b[i])?(p->b=a[i]-b[i],p->a=1):(p->b=b[i]-a[i],p->a=2);
	for(i=1;i<n;i++)
	{
		if(p->b<abs(a[i]-b[i]))
		{
			if(p->b<(a[i]-b[i]))
			{
				p->b=(a[i]-b[i]);
				p->a=1;
			}
			else
			{
				p->b=b[i]-a[i];
				p->a=2;
			}
		}
	}
	return p;
	
}
