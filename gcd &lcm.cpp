#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,g,a1,b1;
	printf("enter a,b");
	scanf("%d%d",&a,&b);
	a1=a;b1=b;
	while(1)
	{
		if(b%a==0)
		{
			g=a;
			break;
		}
		else
		{
			c=b%a;
			b=a;
			a=c;	
		}
	}
		printf("lcm is %d,gcd is  %d",(a1*b1)/g,g);
	getch();
}
