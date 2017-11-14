#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int* fun(int*,int*,int);
int main()
{
	int n,*a,*b,i,*k;
	printf("enter size of array\n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(n*sizeof(int));
	printf("\nenter array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
  k=fun(a,b,n);
	for(i=0;i<n;i++)
	printf("\n%d",b[i]);
	getch();
	return 0;
}
int* fun(int *a,int *b,int n)
{
	int i,j=0,s=0;
	while(j<n)
	{
		i=0;s=1;
		while(i<n)
		{
			if(i==j)
			i++;
		    if(i==n)
		    continue;
			s=s*a[i];
			i++;
		}
		b[j]=s;
		j++;
	}
 return b;
}
