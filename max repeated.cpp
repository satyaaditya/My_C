#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int *,int);
int main()
{
	int n;
	printf("enterr size of array");
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
		printf("enter array");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	fun(a,n);
	getch();
}
void fun(int *a,int len)
{
	int b[10],i,j,k,c;
	for(i=0;i<10;i++)
	b[i]=-1;
	for(i=0;i<len;i++)
	{  
		 k=a[i];c=0;
		if(k<0&&k>9)
		goto x;		
		for(j=0;j<len;j++)
		{
			if(a[j]==k)
			{
			c++;
			a[j]=-1;
			}
		}
x:	b[k]=c;
	}
	k=b[0];
	for(i=1;i<10;i++)
	{
		if(k<=b[i])
		{
			k=b[i];
			c=i;
		}
	}
	printf(" %d ",c);
}
