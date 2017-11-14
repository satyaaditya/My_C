#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void dec();
void hex();
void oct();
char *a;
main()
{
int ch;
printf("enter ur choice\n");
while(1)
{ printf("1.decimal\t2.octal\t3.hexadecimal\n");
scanf("%d",&ch);
 switch(ch)
 {
 	case 1 : dec();
 		break;
    case 2 : oct();
      break;
    //case 3 : hex();
      //  break;
 }	
}
 getch();	
}
void dec()
{
	int l=0,i,k;
	int sum=0;
	char *b;
a=(char*)malloc(10*sizeof(char));
	printf("nter ur array");
fflush(stdin);
	gets(a);
  b=a;
    for(;*b!='\0';b++)
 l++;
  b--;
    for(i=0;i<l;i++)
	{
		if(*b=='0')
		{
			k='0'-48;
			sum=sum+k;				
		}
		else
		{
			k='1'-48;
			sum=sum+(k*pow(2,i));
		}
b--;
	}  free(a);
	printf("\n%d is sum\n",sum);
}
void oct()
{
		int l=0,i,k;
	int sum=0;
	char *b;
a=(char*)malloc(10*sizeof(char));
	printf("\nenter ur array");
fflush(stdin);
	gets(a);
  b=a;
    for(;*b!='\0';b++)
 l++;
  b--;
    for(i=0;i<l;i++)
	{
		if(*b=='0')
		{
			k='0'-48;
			sum=sum+k;				
		}
		else
		{
			k='1'-48;
			sum=sum+pow(8,i);
		}
		b--;
	}
	free(a);
	printf("\n%d is sum",sum );
}
