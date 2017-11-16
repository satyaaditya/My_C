#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <string.h>

int get_number(char *s, int *i, int n,int x){
	char c = s[*i];
	int sum = 0;
	while (*i < n && s[*i] == c){
		sum += ((int)s[*i] - 96);
		*i += 1;
		if (sum == x) return 1;
	}
	return 0;
}

void check_result(char *s, int x){
	int n = strlen(s);
	int i = 0; bool flag = false;
	while (i < n){
		int b = i;
		if (x % ((int)s[i] - 96) == 0){
			if (get_number(s, &i, n, x)){
				printf("Yes\n");
				flag = true;
				break;
			}
			else
			{
				if (b == i)
					i++;
			}
		}
		else
			i++;
	}
	if (flag == false)
		printf("No\n");
	return;
}

int main(){
	char* s = (char *)malloc(512000 * sizeof(char));
	scanf("%s", s);
	long int n;
	scanf("%ld", &n);
	long int a0 = 0;
	if (n <= 0 || n > 100000)
		printf("No");
	while(a0 < n){
		int x;
		scanf("%d", &x);
		if ( x<0 || x>10000000)
		check_result(s, x);
		a0++;
	}
	return 0;
}