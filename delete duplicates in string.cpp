#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void fun(char*,int);
int main()
{
	char *a;
	a=(char*)malloc(20*sizeof(char));
	printf("enter string");
	gets(a);
	int l=strlen(a);
	fun(a,l);
	getch();
}
void fun(char *a,int l)
{	int i=0,count=0,j=0;
	while(a[i]!='\0')
	{	
		if(a[i]==a[i+1])
		{
			i++;
			count++;
		}
		else
		{
			if(count==0)
			{
			i++;
			j++;
			}
			else
			{	
				int k=l-i;
				while(k>=0)
				{
					a[i-count]=a[i];
					i++;k--;
				}
				count=0;i=j;	
			}
		}
		
	}
	puts(a);
}
