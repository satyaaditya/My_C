#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void add(int);
void del(int);
void check(int);
int a[5],rear=-1,front=-1,ele;
int main()
{
 int i;
 printf("enter value of i");
	
 while(4)
 {
printf("enter choice\n1.add element\n2.delete element\n3.exit");
 scanf("%d",&i);
 switch(i)
{
case 1 : printf("nter value to be added to queue");
		scanf("%d",&ele);		  
		add(ele);
		break;
case 2 : printf("entr value to be deleted");
		scanf("%d",&ele);
		del(ele);
		break;
case 3 : exit(0);
 }
 }	
}
void add(int ele)
{
int item,i;
 if(rear==5)
 {
 printf("queue overflow");
 return;
}
if(rear==-1&&front==-1)
{
rear++,front++;
a[rear]=ele;
return;
}
else
{
check(ele);	
rear++;	
return;	
}
}
void check(int ele)
{ int j=0,i;
for(i=0;i<=rear;i++)
{
	if(ele>=a[i])
	{
	for(j=rear+1;j>i;j--)
	{
		a[j+1]=a[j];
	}	
	a[i]=ele;
	return;
	}
}	
a[i]=ele;
}
void del(int k)
{int i;
	if(rear==-1&&front==-1)
	printf("queue is empty");
	else
	for(i=0;i<rear;i++)
	{
		if(a[i]==k)
		{
			for(;i<rear;i++)
			{
				a[i]=a[i+1];
			}
	 	}
	}
rear--;
}
