#include<stdio.h>
#include<conio.h>
void display(int[][] ,int ,int);
main()
{
	int a[3][4]={1,2,3,4,
	              5,6,7,8,
	              1,2,3,4
	             };
	 display(a,3,4);            
}
void display(int a[][],int row,int col)
{
int i,j;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)	
{
	printf("\n%d",a[i][j]);
}	
}	
}
