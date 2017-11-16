
/*
1 2 0 1 0
0 0 0 9 0
0 0 0 8 0
0 1 4 6 5
0 0 2 3 4*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

bool is_valid(int **dp, int i, int j, int **arr, int m, int n, int ol_i, int ol_j){
	if (i <= n - 1 && i >=0  && j >=0 && j<=m - 1 && arr[i][j]>arr[ol_i][ol_j])
		return true;
	return false;
}
int max(int a, int b){
	if (a > b)
		return a;
	return b;
}

int get_individual_count(int**dp, int i, int j, int **arr, int n, int m){
	if (i>n || i<0 || j>m || j < 0)
		return 0;
	int down=0,  up =0, right =0, left = 0;
	if (is_valid(dp,i+1,j,arr,m,n,i,j))
	{	
		down= 1 + get_individual_count(dp, i + 1, j, arr, n, m);
	}
	if (is_valid(dp, i -1, j, arr, m, n, i,j))
	{
		
		up = 1 + get_individual_count(dp, i - 1, j, arr, n, m);
	}
	if (is_valid(dp, i, j + 1, arr, m, n, i, j)){
		
		right = 1 + get_individual_count(dp, i, j+1, arr, n, m);
	}
	if (is_valid(dp, i, j - 1, arr, m, n, i, j)){
		
		left= 1 + get_individual_count(dp, i, j - 1, arr, n, m);
	}
	return dp[i][j]=max(up, max(down, max(left, right)));
}

int get_count(int**arr, int n, int m){
	//int large_number = 0; int x_cor = 0, y_cor = 0;
	int **dp = (int**)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
		dp[i] = (int*)calloc(m, sizeof(int));
	int *path = (int*)calloc(m*n, sizeof(int));
	int res = 0;
	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < m; j++){
			if (dp[i][j] == 0){
				dp[i][j] = get_individual_count(dp, i, j, arr, n, m);
				res =  max(dp[i][j], res);
			}
			}
	}
	
	return res;
}


int main(){
x:	int m, n;
	printf("enter m,n");
	scanf("%d%d", &n, &m);
	int **arr = (int**)calloc(n, sizeof(int*));
	for (int i = 0; i < n; i++)
		arr[i] = (int*)calloc(m, sizeof(int));
	printf("enter data");
	fflush(stdin);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("%d", get_count(arr, n, m));
	goto x;
}
