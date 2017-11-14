#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void convert(char *,int);
void push(char[],char);
int pop(char[]);
int pri(char);
char *a,*b;
int top=-1;
int main()
{
	int l;
	a=(char*)malloc(20*sizeof(char));
	b=(char*)malloc(20*sizeof(char));
	printf("\nenter infix expression\n");
	gets(a);
	l=strlen(a);
	convert(a,l);
	puts(b);
	getch();
}
void convert(char *a,int l)
{	
	int k=0,i=0,j=0;
	char st[10];
	while(k<l)
	{
		if(a[k]=='(')
		{
			push(st,a[k]);
			k++;
		}
		else if(a[k]>='a'&&a[k]<='z')
		{
			b[j]=a[k];
			j++;k++;
		}
	    else if(a[k]=='+'||a[k]=='-'||a[k]=='/'||a[k]=='*')
		{
			if(pri(a[k])>pri(st[top]))
			push(st,a[k]);
			else
			{
				while(pri(a[k])<pri(st[top])||top!=-1)
				{
					b[j]=pop(st);
					j++;
				}
				push(st,a[k]);
				k++;
			}
		}	
	}
while(top!=-1)
{
	b[j++]=pop(st);
}
b[j]='\0';
return;
}
void push(char st[],char k)
{
	top=top+1;
	st[top]=k;
	return;
}
int pop(char st[])
{
	 char k;
	 k=st[top];
	 top=top-1;
	 return k;
}
int pri(char a)
{
	if(a=='*'||a=='/'||a=='%')
	return 1;
	else
	return 0;
}
