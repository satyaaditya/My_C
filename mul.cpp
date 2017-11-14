#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int a[],int,int b[],int);
 main()
{
int a[50],b[50],m,n,i;
printf("enter size of array 1");
scanf("%d",&m);
printf("\nenter size of second array");
scanf("%d",&n);
printf("\nenter array 1");
for(i=0;i<m;i++)
scanf("%d",&a[i]);	
printf("enter array 2");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
fun(a,m,b,n);
getch();
}
void fun(int a[],int m,int b[],int n)
{
 int **p,j,i;
 p=(int**)malloc(m*n*sizeof(int));
 for(j=0;j<m;j++)
 {
 p[j]=(int*)malloc(n*sizeof(int));

}
printf("%d %d",m,n);

for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
	*(p[i]+j)=a[i] * b[j];
	}
} 	
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("\t%d",*(p[i]+j));
	}
printf("\n");
}
}
