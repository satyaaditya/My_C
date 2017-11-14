#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
char *a,c,*j;
int n;
a=(char*)calloc(100,sizeof(char));
fflush(stdin);
int k=0,count,i;
gets(a);
j=a;
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
	a[k++]= *(j-1);
	a[k++]=count+'0';

}
else
{
	a[k++]= *(j-1);
}
}

a[k]='\0';

puts(a);
getch();
}
