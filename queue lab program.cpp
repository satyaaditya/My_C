#include<stdio.h>
#include<conio.h>
void push();
int isful();
void pop();
int isempty();
int a[5],rear=-1,front=-1;
int main()
{
int choice;
while(4)
{
printf("enter choice");
printf("\t1.push\t2.pop\t3.exit");
scanf("%d",&choice);
switch(choice)
{
 case 1 : push();
  break;
 case 2 : pop();
  break;
  case 3 : goto y;
}
}
y : getch();
}
void push()
{
	int i;
	i=isful();
   if(i==1)
   {
   	rear= rear+1;
   	printf("ur entering elemnt in to a[%d]",rear);
   	scanf("%d",&a[rear]);
   } 
}
int isful()
{
	if(rear>4)
   {    
	printf("queue oveflow");
	return 0;
}
    else
	{
		return 1;
	} 
}
void pop()
{
	int i,x;
	i= isempty();
   if(i==1)
   {
   front=front+1;
  x=a[front];printf(" deleted element is  %d",a[front]);
}
}
int isempty()
{
	if(rear==front)
	{
		printf("queue underflow");
		return 0;
	}
	else
	{
	return 1;
	}
}
