#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int m,n,r=0,s=0,i=0,a[10];
	printf("enter n value\n");
	scanf("%d",&m);
	if(m<0)
	n=-(m);
	else
	n=m;
	while(n>0)
	{
		r=n%2;
		s=s+r*pow(10,i);
		a[i]=r;
		n=n/2;
		i++;
	}
	if(m<0)
	{
		for(n=0;n<i;n++)
		{
			if(a[n]==0)
			a[n]=1;
			else
			a[n]=0;
		}s=1;
		for(n=0;n<i;n++)
		{
			if(a[n]==1&&s==1)
			{
			a[n]=0;		
			s=1;
			}
			else if((a[n]==1&&s==0)||a[n]==0&&s==1)
			{
				a[n]=1;
				s=0;
			}
		    else if(a[n]==0&&s==0)
			{
				a[n]=0;
				s=0;
			}	
		}
	}
	for(n=i-1;n>=0;n--)
	printf(" %d ",a[n]);

}
