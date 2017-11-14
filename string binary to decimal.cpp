#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void fun(char*);
int main()
{
	char *a;
	a=(char*)malloc(10*sizeof(char));
	printf("enter string");
	gets(a);
	fun(a);
	getch();
}
void fun(char*a)
{
	int i=0,s=0,k=0;
	while(a[i]!='\0')
	i++;
	i--;
	while(i>=0)
	{
		int j;
		j=a[i]-48;
		s=s+j*pow(2,k++);
		i--;
	}
	printf("%d",s);
}
