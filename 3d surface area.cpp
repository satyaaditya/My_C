#include<stdio.h>
#include<stdlib.h>

int check_down(int **arr, int h, int w, int i, int j){
	if (i + 1 < h){
		if (arr[i + 1][j] > arr[i][j])
			return arr[i][j];
		return arr[i + 1][j];
	}
	return 0;
}

int check_up(int **arr, int h, int w, int i, int j){
	if (i - 1 >= 0){
		if (arr[i-1][j]>arr[i][j])
			return arr[i][j];
		return arr[i - 1][j];
	}
	return 0;
}
int check_right(int **arr, int h, int w, int i, int j){
	if (j+1 < w){
		if (arr[i][j+1]>arr[i][j])
			return arr[i][j];
		return arr[i][j+1];
	}
	return 0;
}
int check_left(int **arr, int h, int w, int i, int j){
	if (j-1 >= 0){
		if (arr[i][j-1]>arr[i][j])
			return arr[i][j];
		return arr[i][j-1];
	}
	return 0;
}

int get_surface_area(int **arr, int h, int w){
	int count = 0; int temp = 0;
	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++){
			temp = arr[i][j] * 4 + 2;
			temp = temp - (check_down(arr, h, w, i, j) + check_up(arr, h, w, i, j) + check_left(arr, h, w, i, j) + check_right(arr, h, w, i, j));
			count += temp;
		}
	}
	return count;
}

int main(){
	int h, w;
	scanf("%d%d", &h, &w);
	int **arr = (int**)malloc(h *sizeof(int*));
	for (int i = 0; i < h; i++)
		arr[i] = (int*)malloc(w * sizeof(int));
	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++)
			scanf("%d", &arr[i][j]);
	}
	printf("%d\n", get_surface_area(arr, h, w));
}