#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int a[][3],int);
 main()
{
int a[50][3],m,n=3,i,j;
printf("enter array dimemsions");
scanf("%d",&m);
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
fun(a,m);
getch();
}
void fun(int a[][3],int m)
{
int k,i,j;
k=a[0][0];
for(i=0;i<m;i++)
{
	for(j=0;j<3;j++)
	{
		if(k>a[i][j])
	k=a[i][j];	
	
	}
}
printf("%d is the least element",k);
}
