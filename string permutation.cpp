#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(char*,int ,int);
int main()
{
	char *a;int n;
	printf("\nenter size of array");
	scanf("%d",&n);
	a=(char*)malloc(n*sizeof(char));
	fflush(stdin);
	gets(a);
	fun(a,0,n-1);
	getch();
}
void fun(char *a,int k,int n)
{ 
	if(n==k)
	{
	for(int i=0;i<=n;i++)
	printf(" %c ",a[i]);
	printf("\n");
	}
	else
	{
		for(int i=k;i<=n;i++)
		{
			char t=a[k];a[k]=a[i];a[i]=t;
			fun(a,k+1,n);
			t=a[k];a[k]=a[i];a[i]=t;
		}
	}
}
