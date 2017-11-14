#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int);
int pos,a[10];
int main()
{
	int i;
	printf("\nenter ur array\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	fun(pos);
	getch();
}
void fun(int pos)
{
	int i,j;
	i=2*pos+1;
	if(a[i]!=0)
	fun(pos);
	printf("\t%d",a[pos]);
	j=2*pos+2;
	if(a[j]!=0)
	fun(pos);
}
