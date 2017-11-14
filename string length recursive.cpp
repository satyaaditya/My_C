#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char* fun(char *,int,int);
int main()
{
	char *a;int i=0;
	a=(char*)malloc(20*sizeof(char));
	printf("enter string\n");
	gets(a);
	while(a[i]!='\0')
	i++;i--;
  a=fun(a,0,i);puts(a);
	getch();
}
char* fun(char*a,int p,int q)
{
	if(p>=q)
	return a;
	else
	{ 
		char temp=a[p];
		a[p]=a[q];
		a[q]=temp;
		fun(a,++p,--q);
	}
}
