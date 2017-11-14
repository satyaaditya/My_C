#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	char *a;
	int n,i=0,j=0;
	printf("enter size of string\n");
	scanf("%d",&n);
	a=(char*)malloc(n*sizeof(char));
	printf("enter size of string");
	fflush(stdin);
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]==a[i+1])
		{
			while(a[i]==a[i+1])
			{
				i++;
			}
			a[j]=a[i];
			j++;i++;
		}
		if(a[i]!=a[i+1])
		{
		a[j]=a[i];
		j++;i++;
		}
		if(a[i]=='\0')
		a[j]='\0';
	}
	puts(a);
}
