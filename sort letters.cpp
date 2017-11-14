#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void sort(char*,int,int);
int fun(char*,int,int);
int main()
{
	int n;
	char *a;
	printf("\nenter size of array");
	scanf("%d",&n);
	a=(char*)malloc(n*sizeof(char));
	printf("\nener array\n");
	fflush(stdin);
	gets(a);
	sort(a,0,n-1);
	 puts(a); 
	getch();
	return 0;
}
void sort(char *a,int left,int right)
{   
	int loc;
	if(left<right)
	{
	loc=fun(a,left,right);
	sort(a,left,loc-1);
	sort(a,loc+1,right);	
	}
}
int fun(char*a,int left,int right)
{
	int beg,flag=0,loc;
	char temp;
	beg=left;loc=left;
	while(flag!=1)
	{
		while(a[loc]-48<=a[right]-48&&loc!=right)
		right--;
		if(loc==right)
		flag=1;
		else if(a[loc]-48>a[right]-48)
		{
		temp=a[right];
		a[right]=a[loc];
		a[loc]=temp;
		loc=right;	
		}
		if(flag!=1)
		{
			while(a[loc]-48>=a[left]-48&&loc!=left)
			left++;
			if(loc==left)
			flag=1;
			else if(a[loc]-48<a[left]-48)
			{
				temp=a[left];
				a[left]=a[loc];
				a[loc]=temp;
			}
		}
	}
return loc;
}
