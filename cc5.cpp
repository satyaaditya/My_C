#include<stdio.h>
#include<stdlib.h>
void fact(int);
int main()
{
  int m,i,a[100];
  scanf("%d",&m);
  for(i=0;i<m;i++)
  scanf("%d",&a[i]);
  fflush(stdin);
  for(i=0;i<m;i++)
 {
  if(a[i]<0)
  printf("\nnot possible");
  if(a[i]==0||a[i]==1)
  printf("\n1");
  else
  	fact(a[i]);
}
}
 void fact(int x)
{
	long long int i=1;
	while(x>1)
	{
		i=i*x;
		x--;
	}
	  	printf("\n%ld",i);
return;
}
