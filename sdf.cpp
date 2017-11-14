#include<stdio.h>
#include<conio.h>
int add(int a[],int);
int main()
{
	int a[5],h,i,j;
	h=5;
	printf("enter array");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	j=add(a,h);
printf("%d",j);
return 0;
}

int add(int a[],int h)
{			
  int sum;
  if(h==0)
  return sum;
  else
  {
  	return a[h] + add(a,h-1);
  	if(h==5)
  	sum =0;
  	sum=sum+a[h-1];

  }}
