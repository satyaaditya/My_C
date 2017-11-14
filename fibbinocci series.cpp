#include<stdio.h>
#include<conio.h>
int fib(int);
int search(int[],int,int,int,int,int,int);
int main()
{
	int a[50],n,i,m,p,q,r,fk,k,loc;
	printf("\nenter no :of elements\n");
	scanf("%d",&n);
	printf("\ enteer elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nenter key element\n");
	scanf("%d",&k);
	fk=fib(n+1);
	p=fib(fk-1);
	q=fib(fk-2);
	r=fib(fk-3);
	m=(n+1)-(p+q);
	if(k>a[p])
	p=p+m;
	loc=search(a,n,m,p,q,r,k);
	if(loc==0)
	printf("not found");
	else
	printf("%d  found at loc %d",k,loc);
	getch();
}
int fib(int m)
{
	int a,b,c;
	a=0;b=1;
	c=a+b;
	while(c<m)
	{
		a=b;
		b=c;
		c=a+b;
	}
	return b;
}
int search(int a[],int n,int m,int p,int q,int r,int k)
{
	int t;
	if(p<1||p>n)
	return  0;
  else if(k==a[p])
  return p;
  else if(k<a[p])
  {
  	if(r==0)
  	return 0;
	else
	{
		p=p-r;
		t=q;
		q=r;
		r=t-r;
	return search(a,n,m,p,q,r,k);
	}
}
else 
{
	p=p+r;
	q=q-r;r=r-q;
	return search(a,n,m,p,q,r,k);
}
}
