#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int get_next_one(char*, int, int);
int main(){
	int t;
	scanf("%d", &t);
	while (t-- > 0){
		int len=0;
		scanf("%d", &len);
		char*s = (char*)calloc(len, sizeof(char*));
		scanf("%s", s);
		int	i = 0;
		int count = 0;
		while (i < len){
			int start = get_next_one(s, i,len);
			i = start;
			int j = start + 1;
			while (j < len){
				if (s[j] == '1')
					count++;
				j++;
			}
			i = get_next_one(s, i + 1, len);
		}
		printf("%d are one pairs", count);
	}
	getch();
}
int get_next_one(char *a, int i,int len){
		while (a[i] != '1' && i<len)
			i++;
		return i;
	}