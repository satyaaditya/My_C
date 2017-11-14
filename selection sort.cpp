#include<stdio.h>
#include<conio.h>
void fun(int [],int n);
int small(int[],int,int);
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
 int k,pos,i,temp;
 for(i=0;i<n;i++)
 {
 	pos=small(a,n,i);
 	temp=a[i];
 	a[i]=a[pos];
 	a[pos]=temp;
}
	for(i=0;i<n;i++)
printf("%d",a[i]);
 }
 int small(int a[],int n,int i)
 {
 	int j,k=a[i],pos;
 	for(j=i+1;j<n;j++)
 	{
 		if(a[j]<k)
 		{
 			k=a[j];
 			pos =j;
 		}
 	}
 return pos;
 }
