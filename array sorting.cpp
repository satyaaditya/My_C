#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int*,int 
);
int main()
{
	int *a,n,i;
	printf("\nenter size of array");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("\nenter ur elements\n");
	for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   fun(a,n);
  getch();
}
void fun(int *a,int n)
{
	int i,j,m,l;
	l=n;
	for(i=n-1;i>0;i--)
	{   
		for(j=0;j<=i;j++)
		{  
			if(a[j]>=a[i])
		{
			m=a[i];
			a[i]=a[j];
			a[j]=m;
	}
		}
	}
for(i=0;i<l;i++)
{
	printf("%d\t",a[i]);
}
}
