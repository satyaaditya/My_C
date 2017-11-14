#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp1; char c;
	fp1=fopen("input.c", "w");
	FILE *fp2 = fopen("spam.cpp", "r");
	while ((c = getc(fp2)) != EOF)
		putc(c, fp1);
	fclose(fp1); fclose(fp2);
	fp1 = fopen("input", "r");
	rewind(fp1);
	while ((c = getc(fp1)) != EOF)
		printf("%c", c);
	fclose(fp1);
	getch();

}
