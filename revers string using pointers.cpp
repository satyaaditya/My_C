#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(char *,char *);
int main()
{
	int n;char *a,*b;
	printf("enter size of array");
	scanf("%d",&n);
	a=(char*)malloc(n*sizeof(char));
	printf("enter ur array\n");
	fflush(stdin);
	gets(a);
	b=a;
	fun(a,b);
	getch();
}
void fun(char *a,char *b)
{
   char s;char *g;
   g=a;
  for(;*b!='\0';b++);
  b--;
   while(*a!='\0')
   {
   if(*a==*(b+1)||*a==*b)
   break;
   	s=*b;
   	*b=*a;
   	*a=s;
   	a++;
   	b--;
   }	
puts(g);
}
