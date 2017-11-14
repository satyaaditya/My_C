#include<stdio.h>
#include<conio.h>
#define SIZE 100
int top=-1;
int A;
int x;
pop()
push()
char stack[SIZE];
void push(char item);
 
 int is_operator();
 int precedence(char symbol);
 int main()
 {
 	   int i,j;
 	   char infix_exp[SIZE],postfix_exp[SIZE];
 	   char item;
 
 printf("\n enter the expression in infix notation en closed in parenthesses: \n ");	   
 gets(infix_exp);
 i=0;
 j=0;
 while(item=='\0')
 {
 	    if(item=='(')	
 	    push(item);
 	    else if((item>=A && item<='Z' )||(item>='a' && item<='z'))
 	    	postfix_exp[j++]=item;

 	    else if(is_operato(item)==1)
 	    {
 	    	x==pop();
 	    	while(is_operator x==1 && precedence x>=precedence(item) )
 	    	{
 	    		postfix-exp[j++]=x;
 	    		x=pop();
 	    	}
 	    	push(x);
 	    	push(item);
		}
		else if(item==')')
        {
        	x=pop();
        } 
    else
    {
    	printf("\n invalid aritmetic expression: \n")
    	
    	exit(0)
}
item=infix_exp[i++];
{
	postfix_exp[j++]='\0';
	printf("\n arithmetic expression in postfix notation:");
	puts(postfix_exp);
	getch();
	
}
void push(char item)
{
	if(top>=SIZE-1)
	{
		printf("\n stack overflow. push not possible \n ")
		
	}
	else
	{
		top=top+1;
		stack[top]=item;
	}
	}
char pop();
{
	char item=NULL;
	if(top<=-1)
	{
		printf("\n stack nderflow. pop not possible \n ")
	}
	else
	{
		item=stack[top];
		stack[top]=NULL;
		top=top-1;
		
	}
	return(item);
}
int is_operator(char symbol)
{
	if(symbol=='^'||symbol=='*'||symbol=='/'||symbol=='+'||symbol=='-')
	{
		return 1;
	}
else
{
	retun 0;
}
}
int precedencd(char symbol)
{
	if(symbol=='^')
	{
		return(3);
	}
	else if(symbol=='*'||symbol=='/')
	{
		return(2);
		
	}
	else if(symbol=='+'||symbol=='-')
	{
		return(1);
		
	}
	else
	{
		return(0);
	}
}

