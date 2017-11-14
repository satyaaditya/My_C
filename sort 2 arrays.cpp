#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void func(char *,char*,int,int);
void sort(char*,int,int);
int fun(char*,int,int);
int main()
{
	char *a,*b;
	int m,n;
	printf("\nenter size of a,b");
	scanf("%d%d",&m,&n);
	a=(char*)malloc(m*sizeof(char));
	b=(char*)malloc(n*sizeof(char));
	printf("\nenter array a");
	fflush(stdin);
	gets(a);
 	printf("\nenter array b");
	fflush(stdin);	
	gets(b);
	func(a,b,m,n);
	getch();
	return 0;
}
void func(char *a,char *b,int m,int n)
{
	int i=0,j=0,k=0,l=m+n;
	char *c;
	c=(char*)malloc(l*sizeof(char));
	sort(a,0,m);
	sort(b,0,n);
	while(a[i]!='\0'&&b[j]!='\0')
	{
		while(a[i]<=b[j]&&a[i]!='\0')
		  c[k++]=a[i++];	
		 while(b[j]<=a[i]&&b[j]!='\0')
		 c[k++]=b[j++]; 
	}
if(a[i]=='\0')
		 {
		 	while(b[j]!='\0')
		 	c[k++]=b[j++];
		 }
		 else if(b[j]=='\0')
		 {
		 	while(a[i]!='\0')
		 	c[k++]=a[i++];
		 }
	c[k]='\0';
	printf("\n");
	for(k=0;c[k]!='\0';k++)
	printf("%c",c[k]);
}
void sort(char*a,int m,int n)
{
	int i=0,j=0,k;
		for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}

}
