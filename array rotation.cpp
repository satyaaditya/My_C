//3. Given an array of size N, rotate left the array values by K.
// example: 1,2,3,4,5 and rotate left by 2 elements will output as 3,4,5,1,2
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int);
char *a,*p,*b,*m;
int main()
{
 int n;
 a=(char*)calloc(100,sizeof(char));
 printf("\n enter ur string\n");
 gets(a);
 printf("\nenter rotational index\n");
 scanf("%d",&n);
 p=a;b=a;m=a;
 fun(n);
 getch();	
return 0;
}
void fun(int n)
{
	int i=0;
	for(;*b!='\0';b++);
	while(i<n)
	{
	*b=*p;	
	b++;p++;i++;	
	}*b='\0';
	while(*p!='\0')
	{
	  *(p-n)=*p;
	  p++;	
	}
*(p-n)='\0';
puts(m);
}


