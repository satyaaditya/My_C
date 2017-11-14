#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int *,int,int,int);
void swap(int *,int,int);
int main()
{
	int *a,n,i,j;
	a=(int*)malloc(20*sizeof(int));
	printf("\nenter size of array\n");
	scanf("%d",&n);
	printf("\nenter ur elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	fun(a,0,n-1,1);
    
	for(i=0;i<n;i++)
	printf("\t%d",a[i]);	
	getch();
}
void fun(int *a,int i,int j,int n)
{
x:	if(i<j)
	{
		if(a[i]==0)
		i++;
		 if(a[j]==n)
		j--;
		if(a[j]==n)
		goto x;
		else
		{
		swap(a,i,j);
		i++;j--;
	}
		 fun(a,i,j,n);
	}
  
}
void swap(int *a,int i,int j)
{
	int m;
	m=a[i];
	a[i]=a[j];
	a[j]=m;
}
