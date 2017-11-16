//this program is placing arrray of 2*n elements in array with i th element in i distance to other ith element
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
bool make_array(int *, int , int );
int main(){
	int n;
	printf("enter size of array ::: ");
	scanf("%d", &n);
	int *arr = (int*)calloc(2 * n, sizeof(int));
	if(make_array(arr,n, n))
	{ 
		for (int i = 0; i < 2*n; i++)
			printf("%d ", arr[i]);
	}
	else
		printf("not possible");
	getch();
}
bool make_array(int *arr, int cur_element, int n){
	if (cur_element == 0)
		return true;
	
		for (int i = 0; i < 2 * n - cur_element - 1; i++){
			if (arr[i] == 0 && arr[i + cur_element + 1] == 0){
				arr[i] = arr[i + cur_element + 1] = cur_element;
				if (make_array(arr, cur_element - 1, n))
					return true;
				arr[i] = arr[i+cur_element + 1] = 0;
			}
		}
		return false;
	
}