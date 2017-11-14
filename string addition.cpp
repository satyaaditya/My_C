#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(char*);
int main()
{
	char *a;
	a=(char*)malloc(50*sizeof(char));
	printf("enter strinng");
	fflush(stdin);
	gets(a);
	fun(a);
	getch();
}
void fun(char *a)
{
	int i=0,s=0,s1=0;
	while(a[i]!='\0')
	{	
	  if(a[i]==',')
	 	 {
	  		  s1=s1+s;
		  		i++;s=0;
		 }

		s=s+(a[i]-48);	
		 if(a[i+1]!=','&&a[i+1]!='\0')
		s=s*10;
		i++;
	}
	printf("%d",s+s1);
	
}
