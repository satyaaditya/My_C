#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int check_distinct(char*, int, int, int);
int main(){
	int t;
	scanf("%d", &t);
	while (t-->0){
		char a[1000];
	scanf("%s", a);
	int k, i = 0, len = 0, count = 0;
	scanf("%d", &k);
	len = strlen(a);
	int j = 0;
	for (int n = k - 1; n < len; n++){
		j = n;
		i = 0;
		while (j< len)
		{
			if (check_distinct(a, i, j, k))
				count++;
			j++;
			i++;
		}
	}
	printf("%d\n", count);
}
	getch();
}
int check_distinct(char *a, int i, int j, int count){
	int b[26] = { 0 }, k,m=0;
	for (k = i; k <= j; k++){
			b[a[k] - '0' - 49]++;
			if (b[a[k] - '0' - 49] == 1)
				m++;
		}
		
	if (count == m)
		return 1;
	return 0;
}