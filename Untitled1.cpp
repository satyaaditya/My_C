#include<stdio.h>
int a(int);
int main()
{
int c,b=2;
c=a(b);	
printf("%d",c);	
}
int a(int b)
{
	return b*b;
}
