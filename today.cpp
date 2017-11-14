#include<stdio.h>
#include<conio.h>
void sort(int [],int,int);
void merge(int [],int,int,int);
int main()
{
	int a[10],n,i;
	printf("enter ur array size\n");
	scanf("%d",&n);
	fflush(stdin);
	printf("\nenter ur array\n");
	fflush(stdin);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,0,n-1);
   printf("\nsorted array is \n");
   for(i=0;i<n;i++)
   printf("\t%d",a[i]);
	getch();
}
void sort(int a[],int beg,int end)
{	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		sort(a,beg,mid);
		sort(a,mid+1,end);
		merge(a,beg,mid,end);
	}
}
void merge(int a[],int beg,int mid,int end)
{
	int i=beg,k=mid+1,b[10],index=beg,j;
	while(i<=mid&&k<=end)
	{
	if(a[i]<a[k])
	{
		b[index++]=a[i++];
	}
	else
	{
		b[index++]=a[k++];
	}
 }
 if(i>mid)
 { 
 	while(k<=end)
    b[index++]=a[k++];
 	
 }
 else
 {
 	while(i<=mid)
 	b[index++]=a[i++];
 }
 for(j=beg;j<index;j++)
 a[j]=b[j];
}
