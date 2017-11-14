#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i=0,n,count;
	char *q,*p,c;
	printf("enter n value");
	scanf("%d",&n);
	q=(char*)calloc(n,sizeof(char));
	while(i<n-1)
	{
	scanf("%c",q);
	q=q+1;
	i++;
	}
q[i]='\0';
p=q;
while(*p!='\0')
{
 count=0,p=q;
 while(*q==*p)
 {
 	count+=1;q=q+1;
 }

if(count>1)
{
printf("%d%c",count,*(q-1));
}
else
{
  printf("%c",*(q-1));
  
	}
p++;
}
getch();	
}
