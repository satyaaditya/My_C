#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

bool is_palindrome(char *str,int len){
	for (int i = 0, j = len - 1; i < j; i++, j--){
		if (str[i] != str[j])
			return false;
	}
	return true;
}

char* make_larger(char *str, int change_count, int len, bool *isUsed){
	if (change_count == 1){
			int i = 0, j = len - 1;
			while (i < len / 2 && change_count){
				if (isUsed[i])
				{
					str[i] = '9'; str[j] = '9';
					i++; j--;
					change_count--;
				}
				else{
					i++; j--;
				}
			}
			if (change_count == 1)
				str[len / 2] = '9';
		}
	else{
		int i = 0, j = len - 1;
		while (change_count && i < len / 2){
			if (isUsed[i]){
				if (str[i] != '9' && str[j] != '9'){
					str[i] = '9'; str[j] = '9';
					i++; j--;
					change_count--;
				}
				else{
					i++; j--;
				}
			}
			else{
				if (str[i] != '9' && str[j] != '9'){
					str[i] = '9'; str[j] = '9';
					i++; j--;
					change_count -= 2;
				}
				else{
					i++; j--;
				}
			}
		}
		if (change_count){
			while (i <= len/2&&change_count){
				str[i++] = '9';
				change_count--;
			}
		}
	}//str[0]='-';str[1]='1';str[2]='\0';
	if (is_palindrome(str, len))
		return str;
	return "-1";
}


char *get_largestPalindrome(char *str, int len, int change_count){
	if (str == NULL || len < 1)
		return NULL;
	int i, j;
	bool *isUsed = (bool*)calloc(len / 2 + 1, sizeof(bool));
	if ((len - 1) % 2 == 0){
		i = ((len - 1) / 2) - 1;
		j = ((len - 1) / 2) + 1;
	}
	else {
		i = ((len - 1) / 2);
		j = ((len - 1) / 2) + 1;
	}
	while ((i >= 0 && j <= len - 1) && change_count){
		if (str[i] == str[j]){
			i--; j++;
		}
		else{
			if (change_count){
				if (str[i] >= str[j])
					str[j] = str[i];
				else
					str[i] = str[j];
				isUsed[i] = true;
				i--; j++;
				change_count--;

			}
		}
	}
	if (is_palindrome(str, len)){
		if (change_count)
		str = make_larger(str, change_count, len, isUsed);
		return str;
	}
	else{
		str[0] = '-'; str[1] = '1'; str[2] = '\0';
		return str;
	}


}

int main(){
x:	int n, k;
	scanf("%d%d", &n, &k);
	if (n <= 0)
		printf("-1");
	else{
		char *str = (char*)calloc(n + 1, sizeof(char));
		scanf("%s", str);
		if (str != NULL){
			str = get_largestPalindrome(str, n, k);
			puts(str);
		}
		else
		{
			printf("-1");
		}
	}
	goto x;
}