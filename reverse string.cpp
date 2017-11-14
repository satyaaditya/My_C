#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char* fun(char *,int n);
int main()
{
	char *a;int n;
	printf("\nenter size");
	scanf("%d",&n);
	a=(char*)malloc(n*sizeof(char));
 	fflush(stdin);
	 gets(a);
	a=	fun(a,n);
	puts(a);
	getch();
}
char * fun(char *a,int n)
{ int j;
	for(int i=0,j=n-1;i<=j;i++,j--)
	{
		char temp =a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	return a;
}
