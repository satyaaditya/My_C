#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
bool circular(int *, int );
int main(){
x:	int n;
	printf("enter size of aray :: ");
	scanf("%d", &n);
	int *arr = (int*)calloc(n, sizeof(char));
	printf("\nenter elments into array :: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	if (circular(arr, n))
		printf("\n loop detected");
	else
		printf("\nno loop");
	goto x;
}
bool circular(int *arr, int n){
	if (arr == NULL || n<2)
		return false;
	int prev=-1 , cur = 0;
	bool * visited = (bool*)calloc(1000, sizeof(bool));
	while (!visited[cur]){
		visited[cur] = 1;
		if (arr[(cur + arr[cur])%n] <= 0)
			return false;
		cur =(cur+ arr[cur] )% n;
		if (cur < 0)
			return false;
		if (cur == 0)
			return true;
	}
	return false;
}