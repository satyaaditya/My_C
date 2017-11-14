#include<stdio.h>
#include<conio.h>
 main()
{
int a[][4]={1,2,3,4,5,6,7,8,9,1,2,3};
int (*q)[4];
int *p;	
p=(int*)a;
q=a;
printf("%d\n%d",p,q);
p++;
q++;
printf("\n%d\n%d",p,q);


}



