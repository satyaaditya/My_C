#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void merge(int[] ,int,int[],int);
int main()
{
	int a[30],b[10],l1,l2;
	printf("enter size of array 1::");
	scanf("%d",&l1);
	printf("enter a");
	for(int i=0;i<l1;i++)
	scanf("%d",&a[i]);
	fflush(stdin);
	printf("\nenter sizre of b");
	scanf("%d",&l2);
	printf("\n enter b");
	for(int i=0;i<l2;i++)
	scanf("%d",&b[i]);
	merge(a,l1,b,l2);
}
void merge(int a[],int l1,int b[],int l2)
{	
	int i=0,j=0;
	printf("%d\n",a[l1-1]);
	while(j<l2)
	{
			if(a[i]>=b[j]&&i<=l1)
		{
			int k=l1-1;
			while(k>=i)
			{
				a[k+1]=a[k];
				k--;
			}
				l1+=1;
				a[i]=b[j];
				j++;
		}
		if(i==l1)
		while(j<l2)
			a[i++]=b[j++];
		
		else if(a[i]<b[j])
		i++;
	}
for(i=0;i<=l1+12;i++)
printf("%d ",a[i]);
}
