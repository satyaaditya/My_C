#include<stdio.h>
#include<conio.h>
int fun(int,int,int);
int main()
{
	int a[10][10];
	int i,j,n,c=0,f=0,p,q;
	printf("\nenter size of matrix");
	scanf("%d",&n);
	printf("\nenter matrix\\n");
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==2)
			{	c=0;
				for(p=0;p<n;p++)
				{	if(a[p][j]==0)
					c++;
				}
			f= fun(c,f,n);
				 if(f!=1)
				{	c=0;
					for(q=0;q<n;q++)
					{	if(a[i][q]==0)
						c++;
					}
					f= fun(c,f,n);
				}
				 if(f!=1)
						{  c=0;
							for(p=0,q=n-1;p<n,q>=0;p++,q--)
							{
							if(i==p&&j==q)
							{	
							for(p=0,q=n-1;p<n,q>=0;p++,q--)
							{	
							if(a[p][q]==0)
							c++;
							}}
						f= fun(c,f,n);
					}
						}
			}
				 if(f!=1 && a[i][j]==2)
				{ c=0;
					if(i==j)
					{
						for(p=0,q=0;p<n,q<n;p++,q++)
						{
						if(a[p][q]==0)
						c++;
						}
					f= fun(c,f,n);	
						}
	  			}
		 		}
				 }
		if(f==0)
		printf("no");
	getch();
}
int fun(int c,int f,int n)
{
		if(c==n-1&&f!=1)
						{
						printf("yes");
						f=1;
						}
	return f;
}
