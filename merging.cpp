#include<stdio.h>
#include<conio.h>
void sort(int,int);
void merge(int,int,int);
int n,a[20],b[20];
int main()
{
   int i;
   printf("enter  size of array");
   scanf("%d",&n);
 fflush(stdin);
  printf("\nenter elements");
   for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
   sort(1,n);
   printf("\nprint array");
   for(i=1;i<=n;i++)
   printf("\t%d",a[i]);
   getch();
}
void sort(int low,int high)
{
	int mid;
	if(low<high)
  {
   mid=(low+high)/2;
  sort(low,mid);
  sort(mid+1,high);
  merge(low,mid,high);
}
else{
return;
}}
void merge(int low,int mid,int high)
{
	int l,m,i;
	for(l=low,m=mid+1,i=low;l<=mid&&m<=high;i++)
	{
		if(a[l]<=a[m])
		b[i]=a[l++];
		else if(a[l]>=a[m])
		b[i]=a[m++];
	}
 while(l<=mid)
	b[i++]=a[l++];
while(m<=high)
b[i++]=a[m++];
for(i=low;i<=high;i++)
a[i]=b[i];
}
