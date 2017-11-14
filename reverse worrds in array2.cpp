#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void fun(char*);
char* rev(char *,int ,int );
int main()
{
	char *a=(char*)malloc(25*sizeof(char));
	printf("enter string\n");
	gets(a);
	fflush(stdin);
	fun(a);
	getch();
}
void fun(char *a)
{
	a=strrev(a);
	int i=0,j=0,k;
	while(a[i]!='\0')
	{
		while(a[i]!=' '&&a[i]!='\0')
		i++;k=i;
		i--;
		a=rev(a,i,j);
		i=k;j=i+1;
	
	 	i++;	
	}
	puts(a);
}
char* rev(char *a,int i,int j)
{
	char t;
	while(j<i)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		i--;j++;
	}
return a;
}
