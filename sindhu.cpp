#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun();
char *a,*b,*p,*x,k;
	
int main()
{
	a=(char*)calloc(100,sizeof(char));
	b=(char*)calloc(100,sizeof(char));
fflush(stdin);
printf("enter string");
//fflush(stdin);
	gets(a);
x=b;
	fun();
getch();	
return 0;
}
void fun()
{
	p=a;
	while(*p!='\0')
	{
		if(*p>='0'&&*p<='9')
		{ 
			for(k=1+'0';k<=*p;k++)
	    {
			*b=*(p+1);
			b++;
		}	
		p=p+2;
		}
	
	else if(*p>='a'&&*p<='z')
	{
		*b=*p;
		b++;p++;
	}
	
	}
*b='\0';
b=x;
puts(b);
}
