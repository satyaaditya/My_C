#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int a[],int,int b[],int);
 main()
{
	int i,j,a[50],b[50],m,n;
	printf("enter m\n");
	printf("array n\n");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	for(j=0;j<n;j++)
    scanf("%d",&b[j]);
fun(a,m,b,n);
getch();
}
void fun(int a[],int m,int b[],int n)
{
int **p,i,j,k;
p=(int**)malloc(m*sizeof(int));
for(i=0;i<n;i++)
 *p=(int*)malloc(sizeof(int));
for(i=m,k=0;i>0,k<m;i--,k++)
{
	for(j=0;j<n;j++)
	{
		p[k][j]=a[k]*b[j];
	}
}printf("ff");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d",*(p[i]+j));
	}
printf("\n");
}
}
