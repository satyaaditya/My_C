#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int);
int *a,b=0,p=0,q=0,f;
int main()
{
	int n,i;
	printf("enter size of array");
	scanf("%d",&f);
	a=(int*)malloc(f*sizeof(char));
printf("enter ur array");
for(i=0;i<f;i++)
scanf("%d",&a[i]);
fflush(stdin);
printf("enter rotation index\n");
	scanf("%d",&n);
if(n>f||n<0)
{
	printf("not posssible");
	exit(0);
}
else if(n<f) 
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
	int m;
	p=f;
	p=p-n;
	for(i=0;i<n;i++)
	{
		m=a[p];q=p;
	  while(a[q]!=a[b])
	  {
	  	a[q]=a[q-1];
      	q=q-1;
	}
    a[b]=m;
	p++;b++;
	
	}
for(i=0;i<f;i++)
printf("\t%d",a[i]);
}
