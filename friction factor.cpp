#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float f1,k,l,j;
	printf("\n enter f value");
	scanf("%f",&f1);
	k=((1/sqrt(f1))+0.40-(1.73686*log(3538570*sqrt(f1))));
	l=((-0.5/pow(f1,1.5))-(0.8684/f1));
	printf("\nk value is %f",k);
	printf("\nl value is %f",l);
	j=f1-(k/l);
	printf("\nj value is%0.9f",j);
	return 0;
}
