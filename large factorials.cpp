#include<stdio.h>
int main()
{
	int a[200],n,i,j,m,temp,x,l;
	
	scanf("%d",&l);
	fflush(stdin);
	while(l>0)
{	
	scanf("%d",&n);
	m=1;temp=0;a[0]=1;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<m;j++)
		{
			x=a[j]*i+temp;
			a[j]=x%10;
			temp=x/10;
		}
		while(temp>0)
		{
			a[m]=temp%10;
			temp=temp/10;
			m++;
		}
	}
for(i=m-1;i>=0;i--)
{
printf("%d",a[i]);
}
printf("\n");
l--;
}
return 0;
}
