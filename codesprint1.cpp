#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d", &n);
	for (int a0 = 0; a0 < n; a0++){
		int grade;
		scanf("%d", &grade);
		if (grade >= 1 && grade <= 100){
			if (grade < 38)
				printf("%d\n", grade);
			else{
				if (grade >= 38){
					if (grade % 5){
						int k = grade / 5;
						if (((k+1) * 5 - grade) < 3)
							printf("%d\n", 5*(k + 1));
						else
							printf("%d\n", grade);
					}
					else
						printf("%d\n", grade);
				}

			}
		}
		// your code goes here
	}
	getch();
	return 0;
}