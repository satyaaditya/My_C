//1. given an array of size N, remove elements in the array from L to R(both inclusive),
// Elements to the right side of R shift left. example: input array 1,2,3,4,5,6,7 L=2 and R=4 output array is 1,2,6,7.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int,int);
char *p,*b,*c;
main()
{
	int r,l;
	p=(char*)calloc(100,sizeof(char));
	printf("enter ur string\n");
	gets(p);
b=p;c=p;
	fflush(stdin);
	printf("eenter r,l values");
	scanf("%d%d",&l,&r);
	fun(l,r);
	getch();
}
void fun(int l,int r)
{
	int i,k;
	k=r-l+1;
	for(i=r;p[i]!='\0';i++)
	p[i-k+1]=p[i+1];
puts(c);
}
