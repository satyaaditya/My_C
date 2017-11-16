#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	long int n;
	scanf("%d", &n);
	bool player1 = false, player2 = false;
	int move = 0;
	if (n % 10){
		printf("1\n%d", n % 10);
	}
	else{
		printf("2\n");
	}
	getch();
}