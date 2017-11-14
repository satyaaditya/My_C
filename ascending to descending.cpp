#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int);
int *a;
int main()
{
	int n,m,k=0;
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
	fun(n);
	getch();
}
void fun(int n)
{

	int i,j,l;
	l=n-1;
	for(i=0;i<n;i++)
	{
	if(l-i==1||i==l)
	break;
		j=a[i];
		a[i]=a[l];
		a[l]=j;
		l--;
	}
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}




