#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c=1;
	scanf("%d%d",&a,&b);
	while(1)
	{
		if(c%a==0 && c%b==0)
		{
			printf("lcm is %d",c);
		 goto y;
		}
		c++;
	}
	y : getch();		
}
