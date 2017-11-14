#include<stdio.h>
int main()
{
	char *p;
	char a[]="hello";
	p=a;
		printf("%c\n",*(p));
	
	printf("%c",(p+1)[3]);
	printf("%c",*(p));
	
	return 0;
	
	
	
	
}
