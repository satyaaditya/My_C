#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,i=0,s=0,r;
	printf("\nenter n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%2;
		s=s+r*pow(10,i);
		n=n/2;
		i++;
	}
	printf("%d",s);
	getch();
	
}
