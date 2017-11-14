#include<stdio.h>
char* read(char a[],char*);
char length(char *);
int main()
{
  char *j,i,*p,a[10],m;
  p=&a[0];
j=  read(a,p);
for(i=0;*j!='\0';i++)
{
printf("%c",*j);
j++;
}
m=length(p);
printf("%d is the length",m);
}



 char* read(char a[],char *p)
 {
gets(a);   
 p=&a[0];
 return p;
 }
 char length(char *j)
 {
 int i,c=0;
 for(i=0;*j!='\0';i++)
 {
 c=c+1;
 j++;
 }
 return c;
}



