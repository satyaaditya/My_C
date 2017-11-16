#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void computelps(int *, char*);
int main(){
	char *word = (char*)calloc(200, sizeof(char));
	char *pattern = (char*)calloc(200, sizeof(char));
	int *lps = (int*)calloc(200, sizeof(int));
	printf("enter word\n");
	scanf("%s", word);
	printf("enter pattern");
	scanf("%s", pattern);
	int string_index = 0;
	int array_index = 0;
	computelps(lps, pattern);
	int i = 0, j = 0, m = strlen(word);
	while (i < m){
		if (word[i] == pattern[j]){
			i++; j++;
		}
		
			if (j == strlen(pattern)){
				j = lps[j - 1];
				printf("substring found at %d ", i - j);
			}
		
		else if (i < m && word[i] != pattern[j]){
			if (j != 0)
				j = lps[j-1];
			else{
				i = i + 1;
			}
			
		}
	}
	_getch();
}
void computelps(int *lps, char*pattern){
	int i = 1,len=0;
	lps[0] = 0;
	int j = strlen(pattern);
	while (i < j){
		if (pattern[i] == pattern[len]){
			len++;
			lps[i] = len;
			i++;
		}
		else{
			if (len != 0)
				len = lps[len - 1];
			else
			{
				lps[i] = 0;
				i++;
			}
		}
	}
}