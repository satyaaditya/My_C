#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,i=0,j=0,c=0;
	printf("\nenter size of striing");
	scanf("%d",&n);
	char *a=(char*)malloc(n*sizeof(char));
	printf("enter string");
	fflush(stdin);
	gets(a);
	while(a[i]!='\0')
	{	
		c=0;
		if(a[i]=='0')
		{
			a[j]=a[i];
			i++;j++;
		}
		else if(a[i]=='1')
		{
			while(a[i]=='1')
			{
				i++;c++;
			}
			a[j]=(c+'0');c=0;j++;
		}
		if(a[i]=='\0')
		a[j]='\0';
	}
 	puts(a);
}
