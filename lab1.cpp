#include<stdio.h>
#include<conio.h>
#define y
void push();
void pop();
int ifu();
int ie();
int a[10], *f,*r, t;
int main()
{
	int i=0,j=0,n;
	f=&i;
	r=&j;
	while(4)
	{
		switch (n)
		{
		case 1: push();
			break;
		case 2: pop();
			break;
		case 3 : 
		goto y ;
		}
	}
y : getch();
}
void push()
{
	int k;
	k = ifu();
	if (k == 1)
	{
		printf("\n now ur enteringg a[%d]", *f);
		scanf("%d", *f);
		*f = *f + 1;
	}
}
int ifu()
{
	if (*f>9)
	{
		printf("\n stack over flow");
		return 0;
	}
	else
		return 1;
}

void pop()
{
	int l;
	l= ie();
	if(l==1)
	{
	*r=*r+1;
printf("a[%d] is popped",a[*r]);
}
}
int ie()

{
	if(*r==0||*r==*f)
	{
	printf("queue underflow");
return 0;
}
else
return 1;
}
