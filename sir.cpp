#include<stdio.h>
#include<conio.h>
int main()
{
	char s[10],rs[10];
	char *p;
	int i,l,k=0;
	gets(s);
	for(i=0;s[i]!='\0';i++);
	l=i-1;printf("%d",i);
	p=&s[i-1];
	while(l>=0)
	{
		rs[k]=*p;
		k++,l--,p--;
	}
    rs[i]='\0';
    puts(rs);
return 0;
}


