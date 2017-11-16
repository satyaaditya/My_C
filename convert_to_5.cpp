#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	long int n;
	scanf("%d", &n);
	int k=n;
	int s,i=0,sum=0;
	while (k > 0){
		s = k % 10;
		if (s == 0){
			sum += (5 * pow(10.0, i));
		}
		i++;
		k = k / 10;
	}
	n += sum;
	printf("%d", n);
	getch();
}
