#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int min_possibleconversions(char *, int );
int main(){
	int t;
	scanf("%d", &t);
	while (t > 0){
		int n;
		scanf("%d", &n);
		char * string = (char*)calloc(n, sizeof(char));
		scanf("%s", string);
		int count = min_possibleconversions(string, n);
		printf("%d\n", count);
		t--;
	}
	}
int min_possibleconversions(char *string, int n){
	int i = 0;
	int count = 0;
	while (i < n){
		if (string[i] == string[i + 1]){
			count += 1;
			i += 2;
		}
		else
			i++;
	}
	return count;
}