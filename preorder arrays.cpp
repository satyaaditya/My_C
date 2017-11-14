#include<stdio.h>
#include<conio.h>
void pre(int);
int a[10],pos=0;
int main()
{
	int i;
	printf("\nenter tree");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	pre(pos);
	getch();
}
void pre(int pos)
{  
	int i,j;
	printf("\t%d",a[pos]);
	i=2*pos+1;
	if(a[i]!=0)
	pre(i);
	j=2*pos+2;
	if(a[j]!=0)
	pre(j);
}
