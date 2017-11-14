#include<stdio.h>
int main()
{
	int x;float y;
	scanf("%d%f",&x,&y);
	if(x>y)
	printf("%0.2f",y);
	else if(x<0||x>2000||y<0||y>2000)
	printf("invalid transaction");
	else if(x<=y&&x>0&&x<=2000&&y>=0&&y<=2000)
	{
		if(x%5==0&&x+0.5<=y)
		{
			y=(y-(x+0.5));
			printf("%0.2f",y);
		}
		else
		printf("%0.2f",y);
	}
	return 0;
}
