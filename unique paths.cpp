#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int find_uniquepathh(int **, int , int );
int main(){
	int m, n;
	printf("enter m,n values");
	scanf("%d%d", &m, &n);
	int **memo = (int**)calloc(m, sizeof(int*));
	for (int i = 0; i < m; i++)
		memo[i] = (int*)calloc(n, sizeof(int));

	int total_unique_paths=find_uniquepathh(memo, m-1,n-1);
	printf("%d", total_unique_paths);
	getch();
}
/*int find_uniquepath(int **memo, int m, int n, int i, int j){
	
	memo[0][0] = 1;
	for (int i = 0; i < m; i++)
		memo[i][0] = 1;
	for (int i = 0; i < n; i++)
		memo[0][i] = 1;
	for (int i = 1; i < m; i++){
		for (int j = 1; j < n; j++){
			memo[i][j] = memo[i - 1][j] + memo[i][j - 1];
		}
	}
	return memo[m - 1][n - 1];
}*/
int  find_uniquepathh(int **memo, int m, int n){
	if (m >= 0 && n >= 0){
		if (n == 0 && m == 0)
			return 1;
		
		if (memo[m][n] != 0)
			return memo[m][n];
		if (m == 0 && n > 0)
			return 1;
		if (m > 0 && n == 0)
			return 1;
	else
	{

		int res = find_uniquepathh(memo, m - 1, n) + find_uniquepathh(memo, m, n - 1);
		memo[m][n] = res;
		return memo[m][n];
	}
}
}