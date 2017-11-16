#include<stdio.h>

#include<stdlib.h>
int reverse(int,int*);
int main(){
x:	int n;
	printf("enter number");
	scanf("%d", &n);
	int base = 1;
	printf("%d",reverse(n,&base));
	goto x;
}
int reverse(int n,int *base){
	
	 int sum = 0;
	if (n == 0)
		return n;
	else{
		int x =reverse(n / 10,base);
		sum += n % 10 * *base+x;
		*base = *base * 10;
		return sum;
	}
}