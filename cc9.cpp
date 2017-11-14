#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
   int m;
   scanf("%d",&m);
  if(m>5)
  exit(0);
  else
 while(m>0)
 {
	int n,count=0,i=0,k;
	scanf("%d",&n);
	x:if(n>0)
	{   i=0;
		if(n>=2048)
		{
		  
		  count=n/2048;
			n=n%2048;
			goto x;
		}
		else if(n<2048)
		{
			while(pow(2,i)<=n)
			i++;
			i--;
			k=pow(2,i);
			n=n%k;
		    count++;
		    goto x;
		}
	}
    else
    printf(" %d",count);
m--;
}
}
