#include<stdio.h>
#include<conio.h>
long compute_nextHighest(long long int v){
	v--;
	v |= v >> 1;
	v |= v >> 2;
	v |= v >> 4;
	v |= v >> 8;
	v |= v >> 16;
	v |= v >> 32;
	v++;
	return v;
}
int main(){
	int q;
	scanf("%d", &q);
	while (q){
		long long int n;
		scanf("%lld", &n);
		long long int x;
		if ((n &(n - 1)) == 0)
			x = compute_nextHighest(n+1)-1;
		else
			x = compute_nextHighest(n)-1;
		printf("%lld\n",  x-n);
		q--;
	}
	
	getch();

}