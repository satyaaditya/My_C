#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int swap(int *,int,int);
void quick(int *,int,int);
int main()
{
	int *a,n,i,loc;
	a=(int*)malloc(100*sizeof(int));
	printf("\nenter size of array\n");
	scanf("%d",&n);
	fflush(stdin);
	printf("\nenter ur array\n");
	fflush(stdin);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quick(a,0,n-1);
		for(i=0;i<n;i++)
		printf("\t%d",a[i]);	
	getch();
}
void quick(int *a,int left,int right)
{   
	int loc;
	if(left<right)
	{
	loc=swap(a,left,right);
	quick(a,loc+1,right);
	quick(a,left,loc-1);
}
}
int swap(int *a,int left,int right)
{
	int loc,temp,beg,flag=0;
	loc=left;
	beg=left;
	while(flag!=1)
	{
		while((a[loc]<=a[right])&&loc!=right)
		right--;
		if(loc==right)
		flag=1;
		else if(a[loc]>a[right])
		{
			temp=a[loc];
			a[loc]=a[right];
			a[right]=temp;
			loc=right;
		}	
	  if(flag!=1)
	  {
	 while((a[loc]>a[left])&&loc!=left)
	  left++;
	  if(loc==left)
	  flag=1;
	 else if((a[loc]<a[left]))
	  {
	  	temp=a[loc];
	  	a[loc]=a[left];
			a[left]=temp;
		loc=left;
	  }
}	}
return loc;
}
