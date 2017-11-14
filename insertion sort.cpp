#include<stdio.h>
#include<conio.h>
void fun(int [],int n);
int main()
{
	int a[10],n,i;
	printf("enter size of array");
	scanf("%d",&n);
	printf("\n enteer elements in to array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	fun(a,n);
	getch();
}
void fun(int a[],int n) 
{
	int i,m,k,j;
	for(i=1;i<n;i++)
	{   
     k=a[i];j=i-1;
		while(k<a[j]&&j>=0)
		{
		a[j+1]=a[j];
		j--;			
	}
	a[j+1]=k;
}
	for(i=0;i<n;i++)
	printf("\t%d",a[i]);
}
