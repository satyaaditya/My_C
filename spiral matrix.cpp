#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50][50];
	int m,n,u=0,v=0,i,j;
	int k=1;
	printf("\nenter m ,n values");
	scanf("%d%d",&m,&n);
	int p=m,q=n;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	a[i][j]=0;
		i=0;j=0;
	while(k<=(p*p))
	{
	 i=u;j=v;
		for(j=u;j<m;j++)
		{
			if(a[i][j]==0)
			a[i][j]=k++;
		}
		j--;
		for(i=v;i<n;i++)
		{
					if(a[i][j]==0)
			a[i][j]=k++;
		}
		i--;
		for(;j>=u;j--)
		{
			if(a[i][j]==0)
			a[i][j]=k++;
		}
		j++;
		for(;i>=v;i--)
		{
			if(a[i][j]==0)
			a[i][j]=k++;
		}
		m--;n--;u++;v++;
	}
	for(i=0;i<p;i++)
{
	for(j=0;j<q;j++)
	printf(" %d ",a[i][j]);
	printf("\n");
}
	getch();	
}
