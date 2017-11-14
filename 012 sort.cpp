#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fun(int *,int,int,int);
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
  j=fun(a,0,n-1,2);
    fun(a,0,j,1); 
 	for(i=0;i<n;i++)
	printf("\t%d",a[i]);	
	getch();
}
int fun(int *a,int i,int j,int n)
{
x:	if(i<j)
	{
	 if(a[i]==0)
	 i++;
	 if(a[j]==n)
		j--;
		if(a[j]==n||a[i]==0)
		goto x;
		else
		{
		swap(a,i,j);
		if(a[j]==n)
		j--;
		i++;
		
	}
		return fun(a,i,j,n);
	}
return j;
}
void swap(int *a,int i,int j)
{
	int m;
	m=a[i];
	a[i]=a[j];
	a[j]=m;
}
