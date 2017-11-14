#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
void fun(int *,int);
int main()
{
	int *a;
	int n;
	printf("\nenter ssize of n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	fun(a,n);
	getch();
}
void fun(int *a,int n)
{
	int b[10]={0};
	for(int i=0;i<n;i++)
	{
		b[a[i]]+=1;
		
	}
int i;	int d=b[0],k;
for( i=0;i<10;i++)
{	
	if(d<b[i]){
	d=b[i];
	k=i;
	}
}
printf("\n%d %d",d,k);
}
