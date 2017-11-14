#include<stdio.h>
#include<conio.h>
void sort(int [],int,int);
void merge(int [],int,int,int);
int main()
{
	int a[10],n,i;
	printf("\nenter size of string");
	scanf("%d",&n);
	printf("\nenter ur array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,0,n-1);
	for(i=0;i<n;i++)
	printf("\t%d",a[i]);
	getch();
}
void sort(int a[],int beg,int end)
{
	int mid;
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
	int i,j,index=beg,k,b[10],n1,n2;
   n1=beg-mid+1;
   n2=end-mid;
   while((i<=mid) && (j<=end))
	{
		if(a[i]<a[j])
		{
		b[index]=a[i];
		i++;
	}
	else
	{
		b[index]=a[j];
		j++;
	}
	index++;
	}
 if(i<mid)
 {  while(j<n2)
 {
 	b[index]=a[j];
 	index++;
 	j++;
 }
}
 else
 {  while(i<n1)
 {
 	b[index]=a[i];
 	index++;
 	i++;
 }
}
for(k=0;k<end;k++)
a[k]=b[k];
}
