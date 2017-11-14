//4. Given two strings as inputs, write a function to print common characters in both the strings.
 //example inputs: cat, ram output:1
 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 void fun(char*,char*);
 int main()
 {
 	char *a,*b;
 	a=(char*)malloc(100*sizeof(char));
	b=(char*)malloc(100*sizeof(char));
 printf("\n enter string 1");
 gets(a);
 fflush(stdin);
 printf("\nenter string 2");
 gets(b);
 fflush(stdin);
fun(a,b);
getch();
 }
 void fun(char*a,char *b)
 {
 	int i=0,j=0,k,g,count=0;
 	for(;a[i]!='\0';i++);
 	for(;b[j]!='\0';j++);
 	for(k=0;k<i;k++)
 	{
 		for(g=0;g<j;g++)
 		{
 			if(a[k]==b[g])
 			count++;
 		}
 	}
 printf("\n%d",count);
 }
