#include<stdio.h>
#include<conio.h>
int main()
{
char a[10],b[10],c,*p,*j;
int k=0,count,i;
gets(a);
p=a;j=a;
while(*j!='\0')
{
count =0; c=*j;
while(c== *j)
{
	count = count+1;
	j=j+1;
}
if(count > 1)
{
	p = p + count;
printf("%d%c",count,*(j-1));
}
else
{
printf("%c",*p);
p=p+1;
}
}
getch();
}
