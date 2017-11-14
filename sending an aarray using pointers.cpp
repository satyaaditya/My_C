#include<stdio.h>
#include<conio.h>
void display(int*,int ,int);
main()
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	 int *p;
	 p=&a[0][0];
	 display(p,3,4);
}
void display(int *a,int r,int c)
{
	int row,col;
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			printf("%d",**(a+r*col+c));
		}
	}
}
