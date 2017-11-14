#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
void push(char[],char);
void convert(char[],char[]);
char pop(char[]);
int pri(char );
char a[10],b[10],st[10];int top=-1;
int main()
{
	printf("enter ur infix expression\n");
	gets(a);
    printf("\npostdix expression\n");
    puts(b);
    convert(a,b);
    getch();
}
void convert(char a[],char b[])
{
	int i=0,j=0;char temp;
	while(a[i]!='\0')
	{
		if(a[i]=='(')
		{
			push(st,a[i]);
			i++;
		}
	    else if(a[i]==')')
	    {
	    	while(st[top]!='('&&top!=-1)
	    	{
	    		b[j]= pop(st);
	    		j++;
	    	}
	    if(top==-1)
	    {
	    	printf("\nincorrect statement");
	    	exit(0);
	    }
	    temp=pop(st);
	    i++;
	}
	     else if(isdigit(a[i])||isalpha(a[i]))
	     {
	     	b[j]=a[i];
	     	i++;j++;
	     }
	  	else if(a[i]=='+'||a[i]=='/'||a[i]=='*'||a[i]=='-'||a[i]=='%')
	  	{
	  		while(top!=-1&&(pri(st[top])>pri(a[i]))&&st[top]!=')')
	  		{
	  			b[j]=pop(st);
	  			j++;
	  		}
	  	push(st,a[i]);
	  	i++;
		  }
	}
while(st[top]!='('&&top!=-1)
{
	b[j]=pop(st);
	j++;
}
b[j]='\0';
puts(b);
}
int pri(char a)
{
	if(a=='+'||a=='-')
	return 0;
	else if(a=='%'||a=='/'||a=='*')
	return 1;
}
void push(char st[],char a)
{
	if(top==9)
	printf("\noverflow");
	else
	{
		top++;
		st[top]=a;
	}
}
char pop(char st[])
{
	char val;
	if(top==-1)
	printf("\nstack undeflow");
	else
	{
	val=st[top];
	top--;
	}
	return val;
	}

