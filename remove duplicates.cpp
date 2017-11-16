#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * remove_duplicates(char *, int);
int main(){
	int t = 0;
	scanf("%d", &t);
	while (t-- > 0){
		int n;
		scanf("%d", &n);
		char *string = (char*)calloc(n, sizeof(char));
		scanf("%s", string);
		string = remove_duplicates(string, n);
		puts(string);
	}

}
char * remove_duplicates(char *string, int n){
	int ref = 0,j=0;
	for (int i = 1; i < n; i++){
		j = 0; bool isequal = false;
		while (j <= ref){
			if (string[i] == string[j]){
				isequal = true;
				break;
			}
			else
				j++;
		}
		if (!isequal)
		{
			string[ref + 1] = string[i];
			ref++;
		}
	}
	string[ref + 1] = '\0';

	return string;
}