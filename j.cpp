#include<stdio.h>
#include<conio.h>
int fact(int);
 in
 int main()
{
	int x;
	scanf("%d", &n);
	x = fact(n);
	printf("%d", x);
}
int fact(int n)
{
	if (n > 1)
	{
		top = top + 1;
		a[top] = n;
		fact(n - 1);

	}
	else
	{
		int l = 1;
	x: l = l*a[top];
		if (top >= 1)
			goto x;
		return l;
	}
}

