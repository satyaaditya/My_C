#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fun(char*,char*);
int main()
{
	int k;
	char *a,*b;
    a=(char*)malloc(100*sizeof(char));
	b=(char*)malloc(100*sizeof(char));
	printf("enter string");
	gets(a);
	fflush(stdin);
	printf("enter string");
	gets(b);
	fflush(stdin);
   k=fun(a,b);
if(k==0)
printf("%d not present\n",k);
else
printf("%d ,present",k);
	getch();
}
int fun(char *a,char *b)
{
   char *p,*q;
	p=a;
    q=b;
	while(*p!='\0')
	{
	while(*q!='\0')
	{
	if(*p==*q)
	{
	p++;q++;	
   if(*p=='\0')
   	return 1;  
	   }
	else 
	q++;
	}
	     	}
}
