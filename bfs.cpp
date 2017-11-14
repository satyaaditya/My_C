#include<stdio.h>
#include<conio.h>
void fun();
void ins(int);
int a[10][10],b[20],c[6]={0},m,n,front=-1,rear=-1;
int main()
{
	int i,j;
	printf("\nenter m,n values\n");
	scanf("%d%d",&m,&n);
	fflush(stdin);
	printf("\nenter matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	rear=rear+1;
	b[rear]=0;
	fun();
	getch();
}
 void fun()
{   int i,p;
	while(rear!=front)
	{
	front=front+1;
	p=b[front];
	if(p==4)
	printf("5\t");
	else
	printf("%c\t",p+65);
	for(i=0;i<n;i++)
	{
		if((a[p][i]==1)&&c[i]==0)
		{
				ins(i);
		}
	}
	}
}
void ins(int i)
{
	rear=rear+1;
	b[rear]=i;
	c[i]=1;
	return ;
}
