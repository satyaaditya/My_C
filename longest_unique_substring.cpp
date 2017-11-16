#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int length_longestsubstring(char *arr, int n){
	int cur_len = 1;
	int max_len = 1;
	int *visited = (int*)calloc(256, sizeof(int));
	for (int i = 0; i < 256; i++)
		visited[i] = -1;
	visited[arr[0]] = 0;
	int prev_index = visited[arr[0]];
	for (int i = 1; i < n; i++){
		prev_index = visited[arr[i]];
		if (prev_index == -1 || i - cur_len > prev_index)
			cur_len++;
		else{
			if (cur_len > max_len)
				max_len = cur_len;
			cur_len = i - prev_index;
		}
		visited[arr[i]] = i;
	}
	if (cur_len > max_len)
		max_len = cur_len;
	return max_len;
}
int main(){
	int t;
	printf("enter no of test cases\n");
	scanf("%d", &t);
	while (t--){
		printf("\nenter size of string :: ");
		int n;
		scanf("%d", &n);
		printf("\nenter string :::  ");
		char *arr = (char*)calloc(n, sizeof(char));
		scanf("%s", arr);
		printf("\n length of longest common substring is %d ", length_longestsubstring(arr, n));
	}
}
