#include<stdio.h>
#include<conio.h>
int nthFibonacci(int);
int main(){
	int n = 9;
	int x = nthFibonacci(n);
	printf("%d", x);
	_getch();
	return 0;
}
int nthFibonacci(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;

	int fib[100];
	fib[0] = 0; fib[1] = 1;
	int i = 2;
	for (i = 2; i < n; i++){
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	return fib[i - 1];
}