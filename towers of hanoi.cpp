#include<stdio.h>
#include<conio.h>
void tower(int,char,char,char);
int main()
{
	int n;
	char a,b,c;
	printf("enter no:of disks");
	scanf("%d",&n);
tower(n,'a','c','b');
}
void tower(int a,char from,char to,char aux)
{
	if(a==1)
	{
	printf("\ndisk 1  moved from %c to  %c\n",from,to);
	return;
}
	else
	{
	tower(a-1,from,aux,to);
	printf("\n*disk %d  moved from %c to %c\n ",a,from,to);
	tower(a-1,aux,to,from);
}
}
