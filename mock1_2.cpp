/*
A String(which only has small case a-z letters) is said to be corrupted if some of the charecters are removed and replaced by the number of characters removed .
Like : apple can be converted into a3e (ppl removed), or a4 (pple removed),ap2e (pl removed) .

helloworld can be modified as hello5 , h9 , 9d , etc , There is no limit on the number of characters that can be removed , or number of different times they can be
removed .

Some more examples are ,abcdefghijkl can be modified as a2d2g4l , a10l .
If 2 or more numbers occured consecutively , you should consider them as a whole , like a23re , is not a "2Chars removed" "3Chars Removed" re ,
it is a "23 Chars removed" re .

Your Task is , Given two corrupted Strings , you need to find whether a common word can be formed from those both corrupted strings
, If Yes ,return 1 , If no word can formed return 0 , -1 For invalid inputs .

Ex Input : s1= "a4e" and s2="4e" , Example Output : 1 .

This is because , apple word can be formed from both .

Ex Input 2 : s1= "k2e2f" and s2="k1fr3" , Returns 0 . No common word can be formed from those both Strings .
Ex Input 3: "5e3" and "abcdeej2" returns 1 , where as if s1 is 5e3i and s2 is abcdeekoll returns 0

Constraints :
A String will only have letters from "a-z and 0-9" ;
0<=Len Of Str1,Str2 <=10000
Numbers occuring in the String can be anything from 1 till 999 .

You can implement the helper functions ,if you want ,Although its optional .Dont worry about space for this question .

Note : Only 25% of Cases ,will have numbers >9 in the Strings .
*/
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
char* get_temp_string(char*, int);
int isDigit(char);
int isSTRMatched(char *, char *);
int isLetter(char);

int isDigit(char letter){
	if (letter - 48 >= 0 && letter - 48 <= 9)
		return 1;
	return 0;
}

int main(){
	x: printf("enter string1 :::  \n");
	char *str1 = (char*)calloc(50, sizeof(char));
	scanf("%s", str1);
	printf("\n eenter string 2 ::: \n");
	char *str2 = (char*)calloc(50, sizeof(char));
	scanf("%s", str2);
	if (isSTRMatched(str1, str2))
		printf("\n YES");
	else
		printf("\n NO");
	goto x;
}



int isLetter(char letter){
	if (letter >= 'a'&& letter <= 'z')
		return 01;
	return 0;
}
int getLength(char *str){
	int len = 0;
	return len;
}


int isSTRMatched(char *str1, char *str2){

	if (str1 == NULL || str2 == NULL)
		return -1;

	int n = strlen(str1);
	char *tstr1 = get_temp_string(str1, n);
	n = strlen(str2);
	char *tstr2 = get_temp_string(str2, n);
	int len1 = strlen(tstr1);
	int len2 = strlen(tstr2);
	if (len1 != len2)
		return 0;
	else
	{
		for (int i = 0; i < n; i++){
			if (tstr1[i] != tstr2[i]){
				if (tstr1[i] != '*' && tstr2[i] != '*')
					return 0;
			}
		}
		return 1;
	}
}
char* get_temp_string(char* str1, int n){
	char* tarr1 = (char*)calloc(100, sizeof(char));
	int i = 0, index = 0;
	while (i < n){
		if (isLetter(str1[i])){
			tarr1[index++] = str1[i];
			i++;
		}
		else if (isDigit(str1[i])){
			int i1 = i + 1;
			while (isDigit(str1[i1]))
				i1++;
			i1--;
			if (i1 - i >= 1)
			{
				char *dst = (char*)calloc(i1 - i + 2, sizeof(char));
				memcpy(dst, str1 + i, i1 - i + 1);
				dst[i1 - i + 2] = '\0';
				int num = atoi(dst);
				while (num > 0){
					tarr1[index++] = '*';
					num--;
				}
				i += i1 - i + 1;
			}
			else{
				int num = str1[i] - 48;
				while (num > 0)
				{
					tarr1[index++] = '*';
					num--;
				}
				i++;
			}
		}
	}
	tarr1[index] = '\0';
	return tarr1;
}