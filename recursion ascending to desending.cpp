#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int*,int ,int);
int main()
{
	int *a;
	int m,k=0,i,l,n;
	printf("enter size of array");
	scanf("%d",&n);
	k=n-1;
	a=(int*)malloc(n*sizeof(int));
	fflush(stdin);
    printf("enter ur array\n");
	for(m=0;m<n;m++)
	scanf("%d",&a[m]);m=0;
	while(m<k)
{
	if(a[m]>a[m+1])
	{
		printf("wrong order\n");
		exit(0);
	}
	else
	m++;
}
l=n-1;
i=0;
fun(a,i,l);
i=0;
for(i=0;i<n;i++)
printf("%d\t",a[i]);
	getch();
}
void fun(int *a,int i,int l)
{
 int j;
 if(i>l)
 return;
 else
 fun(a,i+1,l-1);
 	j=a[i];
		a[i]=a[l];
		a[l]=j;
	
	
	}






