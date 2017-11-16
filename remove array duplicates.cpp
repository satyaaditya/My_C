#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int nums[] = { 1, 1 };
	int ref = -1,j; 
	int n = sizeof(nums) / sizeof(int);
	for (int i = 0; i < n; i++){
		bool flag = true;
		for ( j = 0; j <= ref; j++){
			if (nums[j] == nums[i]){
				flag = false;
				break;
			}
		}
		if (flag){
			nums[ref+1] = nums[i];
			ref++;
		}
		
	}
	printf("\n%d\n", ref);
	for (int i = 0; i <= ref; i++)
		printf("  %d", nums[i]);
	getch();
}
