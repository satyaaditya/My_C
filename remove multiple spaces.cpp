#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(char*);
int main()
{
	char *a;
	a=(char*)malloc(50*sizeof(char));
	printf("\nenter string");
	gets(a);
	fun(a);
	getch();
}
void fun(char *a)
{
	int i=0,j,k=0;
	while(a[i]!='\0')
	i++;i--;
	while(i>0)
	{
		if(a[i]==' ')
		{
			j=i;
			while(a[i]!='\0')
			{
			a[i]=a[i+1];
			i++;
			}	
			i=j;
		}
		i--;k++;
	}
 puts(a);
}
