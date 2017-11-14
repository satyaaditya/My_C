#include<stdio.h>
#include<conio.h>
int main()
{
	char a[10];char *p;
	p=a;
	gets(a);
printf("%d\t%u",*p,*p+1);
printf("\n%d\t%u",p,p+1);
}

