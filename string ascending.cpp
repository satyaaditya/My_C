#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	char *a,*p;
	a=(char*)malloc(20*sizeof(char));
	int i=0,s=0,j=0,c=0,l=0;
	printf("\nenter string ");
	fflush(stdin);
	gets(a);
	p=a;
	while(a[i]!='\0')
	{
		if(a[i]>='2'&&a[i]<='9')
		s=s+(a[i]-48);
		i++;
	}
	i--;
	j=s-i-1;j=j+i;l=j+1;
	if(s==0||s==3)
	puts(a);
	else
	{
	while(i>0)
	{
		c=0;	
		if(a[i]>='2'&&a[i]<='9')
		{
			c= a[i]-48;
			while(c>0)
			{
				a[j]=a[i-1];
				j--;c--;
			}
			i--;
		}
		else
			i--;
	}
	a[l]='\0';
	puts(a);
}
}
