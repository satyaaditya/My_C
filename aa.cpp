#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun();
	char *p,*a,c,*g,*b,*m;
int main()
{
	a=(char*)calloc(100,sizeof(char));
	gets(a);
     p=a;b=a;m=a;
	for(;*b!='\0';b++);
	*g=*b;
	fun();
	getch();
}
void fun()
{   int k,i;
	while(*p!='\0')
	{
	 if(*p=='2')	
{
	*p=*(p+1);
	p=p+2;
}	
	else if(*p>'2'&&*p<='9')
	{
	*b=*g;
	c=*(p+1);
	 k=*p-48;//printf("\n k value %d\n",k);
	
	while(*b!=*p)
	{
			*(b+k-2)=*b;
     	if(*b==*g)
	    *g=*(b+k-2);
			b--;
	}
	for(i=0;i<k-1;i++)
	{
		*b=c;
	b++;
}
	p=p+k;//printf("\n%c is *p\n",*p);

}	
}
puts(m);

}
	

