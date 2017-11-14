#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int);
char *a,*b,*p,*q;
int main()
{
	int n,l=0;
		a=(char*)malloc(100*sizeof(char));
printf("enter ur array");
gets(a);
fflush(stdin);
printf("enter rotation index\n");
	scanf("%d",&n);
	b=a;p=a;
for(;*p!='\0';p++)
	l++;
if(n>l||n<0)
{
	printf("not posssible");
	exit(0);
}
else if((n>=0||n<=9)&&(n<l)) 
{
	fun(n);
	getch();
}
else
{
	printf("not posssible");
	exit(0);
}

}
void fun(int n)
{
	int i;
	char m;
	for(;*p!='\0';p++);
	p=p-n;
	for(i=0;i<n;i++)
	{
		m=*p;q=p;
	  while(*q!=*b)
	  {
	  	*q=*(q-1);
      	q=q-1;
	}
    *b=m;
	p++;b++;
	
	}
puts(a);	
}
