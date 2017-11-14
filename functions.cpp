#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
	int a,x;
	printf("enter a");
	scanf("%d",&a);
	x=sum(a);
	printf("%d",x);

}
int sum(int a)
{
	int r,n,add=0;
	r=n%10;
	n=n/10;
	add=sum(a)+add+r;
	return add;
}
