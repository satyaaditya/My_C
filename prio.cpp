#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
void inspri(int);
void delpri(int);
void check(int);
void display();
int front=-1,rear=-1,a[max];
int main()
{
int n,ch;
printf("\nenter choice\n");
while(1)
{
	printf("\n1.inspri 2.delpri 3.display 4.exit");
	scanf("%d",&ch);
	switch(ch)
{
	case 1 : printf("\nenter element to insert\n");
			scanf("%d",&n);
			inspri(n);
			break;
	case 2 : printf("\nenter element to delete\n");
	     	scanf("%d",&n);
				 delpri(n);
			break;
	case 3 : display();
	break;
	case 4 : exit(0);
		    
}	
}	
}
void inspri(int n)
{
	if(rear==max-1)
{
printf("\nsqueue full\n");
return;
}
	else if(front==-1&&rear==-1)
	{
		front++;rear++;
		a[rear]=n;
	}
    else
    {
    check(n);  
    rear++;	
    }
}
void check(int n)
{
	int l,k;
	for(k=0;k<=rear;k++)
{
	if(n>=a[k])
	{
	for(l=rear+1;l>k;l--)
	{
		a[l]=a[l-1];
	}
  a[k]=n;
   return;
}
}
}
void display()
{
	int z;
	for(;front<=5;front++)
	printf("\n%d\n",a[front]);
front=0;
}
void delpri(int n)
{
int i,j;
if(front==-1&&rear==-1)
printf("\nqueue empty");
else
{
	for(i=0;i<=rear;i++)
	{
		if(n>=a[i])
		{
			for(j=rear+1;j<i;j--)
			{
			a[j-1]=a[j];	
			}
		a[i]=-99;
		rear--;
		}
	}
}	
	
}

