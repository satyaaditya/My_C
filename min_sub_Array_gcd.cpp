#include <stdio.h>
int get_gcd(int, int);
int main(){
	int t;
	scanf("%d", &t);
	int q = 0;
	while (q < t){
		int a[100]; int n, gcd, i, len, j, x,flag=0;
		scanf("%d", &gcd);
		scanf("%d", &n);
		int c[100];
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for (i = 0; i <= n - 1; i++)
			c[i] = 0;
		for (len = 2; len < n; len++){
			for (j = 0; j < n; j++){
				if (c[j] == 0){
					x = get_gcd(a[j], a[j + 1]);
					if (x == gcd){
						flag = 1;
						printf("%d", len);
						goto d;
					}
					c[j] = x;
				}
				else{
					x = get_gcd(c[j], a[j + len - 1]);
					if (x == gcd){
						flag = 1;
						printf("%d\n", len);
						goto d;
						c[j] = x;
					}
				}
			}
		}
	d:	if (!(flag))
		printf("-1\n");
		q++;
	}
	getchar();
	return 0;
}
int get_gcd(int a, int b){
	int g;
	while (1)
	{
		if (b%a == 0)
		{
			g = a;
			break;
		}
		else
		{
			int c = b%a;
			b = a;
			a = c;
		}
	}
	return g;
}
