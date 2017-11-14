#include<stdio.h>
#include<conio.h>
void show(int(*q)[3][4],int,int,int );
main()
{
	int i,j,k;
	int a[2][3][4]={1,2,3,4,
	5,5,6,7,
	8,9,4,5,
	
		1,2,3,4,
		5,6,7,8,
		9,8,7,4

	};
	show(a,2,3,4);
}
void show(int (*q)[3][4],int i,int j,int k)
{
	int ii,jj,kk;
	int *p;
	for(ii=0;ii<i;ii++)
	{
		for(jj=0;jj<j;jj++)
		{
			p=q[ii][jj];
			for(kk=0;kk<k;kk++)
			{
				printf("%d",*(p+k));
				printf("\n");
			}
		printf("\n");
		}
		
	}
}
