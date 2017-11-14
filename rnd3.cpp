#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int*,int*,int,int);
int main()
{
	int *a,n,m,*b;
	printf("enter sizeof array");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("\nenter size of second array\n");
	scanf("%d",&m);
	b=(int*)malloc(m*sizeof(int));
	printf("enter array1:::\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter array2:::\n");
	for(int i=0;i<m;i++)
	scanf("%d",&b[i]);
	fun(a,b,n,m);
	getch();
}
void fun(int *a,int*b,int n,int m)
{
	int c[10]={0},i,j;
	for(int i=0;i<n;i++)
	{
		c[a[i]]++;
	}
	for(j=0;j<m;j++)
	c[b[j]]--;
	for( i=0;i<10;i++)
	{
		if(c[i]!=0){
		printf("fequency not matching");
		exit(0);
	}
	}
	printf("\nfrequency matching");
}
