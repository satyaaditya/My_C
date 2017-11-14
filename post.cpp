#include<stdio.h>
#include<conio.h>
#include<string.h>
void push(char);
void mul(char);
char a[10],k;
int b[10],top=-1,p;

int main()
{
	int x,i,l;
	printf("enteer strring");
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	if(a[i]>='0'&&a[i]<='9')
	push(a[i]);
	if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/')
	mul(a[i]);
printf("%d is the answer",b[top]);	
	getch();
	
}
void push(int p)
{
	top+=1;
b[top]=	int(k-48);
}
int mul(char k)
{
	int a,b,c;
	a=b[top];
	b[top]='\0';
	top--;
	b=b[top];
	b[top]='\0';
	top--;
	switch(k)
	{
	case '+' : c=a+b;
	break;
	case '-' : c=a-b;
	break;
	case '*' : c=a*b;
	break;
	case '/' : c=a/b;
	break;	
	}
 top++;
 b[top]=c;

}

