#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int[],int,int,int);
int main()
{
	int a[10],n,i,k;
	printf("enteer no of elemnets\n");
	scanf("%d",&n);
	printf("\nentee elemnts\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n enter elemnt to be searched\n");
	scanf("%d",&k);
	fun(a,0,n-1,k);
	getch();
}
void fun(int a[],int beg,int end,int k)
{
	int mid,p=0;
	if(beg<=end)
	{
		mid=(beg+end)/2;
		if(k==a[mid])
		{
		printf("\nfound");p=1;
		return;
	}
		else if(k>a[mid])
		{
		 fun(a,mid+1,end,k);
		}
      else if(k<a[mid])
      {
      	fun(a,0,mid,k);
      }
}
if(beg>end&&p==0)
{
	printf("not found");
	return;
}
}
