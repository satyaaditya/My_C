#include<stdio.h>
#include<conio.h>
//#include<ctype.h>
#define max 20
float st[max];
int top=-1;
void push(float st[],float val);
float pop(float st[]);
float eva(char []);
int main()
{
	float val;
	char exp[100];
 	printf("\nenter postfix expression\n");
 	gets(exp);
 	val=eva(exp);
 	printf("\n\n %d",val);
 	getch();
}
float eva(char exp[])
{
	int i=0;
	float op1,op2,val;
	while(exp[i]!='\0')
	{
		if(isdigit(exp[i]))
		push(st,(float)(exp[i]-'0'));
	
	else
	{
		op2=pop(st);
		op1=pop(st);
		switch(exp[i])	
		{
			case '+' : val=op1+op2;
			break;
			case '-'  : val=op2-op1;
			break;
			case '/'	: val=op2/op1;
			break;
			case '*' : val=op2*op1;
			break;
			}
	push(st,val);
	}
}
return val;
}
void push(float st[],float val)
{
	if(top==max-1)
	printf("stack full\n");
	else
	{
		top++;
		st[top]=val;
	}
}
float pop(float st[])
{
	float val;
	if(top==-1)
	printf("\nstack empty");
	else
{

	val=st[top];
	top--;
}
return val;
}
