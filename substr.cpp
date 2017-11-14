#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{	int i=0,j=0,k;
	char *a=(char*)malloc(20*sizeof(char));
	char *b=(char*)malloc(20*sizeof(char));
	printf("\nenter string 1 ::");
	fflush(stdin);
	gets(a);
	printf("\nenter string 2 ::");
	fflush(stdin);
	gets(b);
	while(a[i]!='\0')
	{	j=0;
		if(a[i]==b[j])
		{
			k=i;
			while(b[j]==a[i]&&b[j]!='\0')
				{
				i++;j++;
				}
			if(b[j]=='\0')
			{
				printf("yes");
				exit(0);
			}
			else
			{
				i=k+j-1;
				j=0;
			}
		}
		else
		i++;
	}
	getch();
}
