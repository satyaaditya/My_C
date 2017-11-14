#include<stdio.h>
#include<conio.h>
int main()
{
	char b[10],c,a[10];
	int k=0,i,count=0;
	gets(b);

	while(b[i]!='\0')
{  c=b[i];count=0;
	while(c==b[i])
	{
	count+=1;i++;
	}
	if(count>1)
	{
	a[k]=count;
	k++;
	a[k]=b[i-1];
		
	}
else
{
	a[k]=b[i-1];
	k++;
}
}
a[k]='\0';
puts(a);
}
