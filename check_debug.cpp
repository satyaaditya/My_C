#include<stdio.h>
#include<conio.h>
void modifyAge(int age){
	printf("Function Started with %d\n", age);
	age = 88;
	age = 90;
	printf("Function Ended with %d\n", age);
}
int getNewAge(){
	int new_age = 100;
	return new_age;
}
int main(){

	int age = 10; //Keep Breakpoint here
	age = 13;
	age = 15;
	printf("%d\n", age);
	age = 17;
	modifyAge(age);
	printf("%d\n", age);
	age = getNewAge();
	printf("%d\n", age);
	getch();
	return 0;
}