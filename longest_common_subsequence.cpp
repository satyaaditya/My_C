#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
int lcs(char*, int, char *, int);
int  max(int , int );
int main(){
	char *a = "saatwqwerjuasd";
	char *b = "saatyqwertyasd";
	int len=lcs(a, strlen(a), b, strlen(b));
	printf("\n%d ", len);
	getch();
	return 0;
}
int lcs(char*a, int lena, char *b, int lenb){
	char res[20]; int k = 0;
	if (a == NULL || (lena == 0 || lenb == 0))
		return 0;
	else{
		int result = 0;
		int **x = (int**)calloc(lena+1, sizeof(int*));
		for (int i = 0; i <lena+1; i++)
			x[i] = (int*)calloc(lenb+1, sizeof(int));
		
		for (int i = 0; i <= lena; i++){
			for (int j = 0; j <= lenb; j++){
				if (i == 0 || j == 0)
					x[i][j] = 0;
				else{
					if (a[i-1] == b[j-1]){
						x[i][j] = 1 + x[i - 1][j - 1];
						result = max(result, x[i][j]);
					}
					else
						x[i][j] = 0;
				}
			}
		}
		int index = 0;
		int p = lena;
		int q = lenb;
		while (p>0 && q>0){
			if (a[p - 1] == b[q - 1]){
				res[index++] = a[p - 1];
				p--; q--;
			}
			else if (x[p - 1][q] > x[p][q - 1])
				p--;
			else if (x[p - 1][q] < x[p][q - 1])
				q--;
			else{
				p--; q--;
			}

		}
		res[index] = '\0';
		printf("%s", res);
		return result;
	}
}
int max(int a, int b){
	return (a>b) ? a : b;
}