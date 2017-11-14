#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
char* reverse(char*,int,int);
int main()
{
	char *a = (char*)malloc(8*sizeof(char));
	printf("enter strinng");
	scanf("%[^\n]%*c", a);
	printf("%s", a);
	getch();
}
