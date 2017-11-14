#include<stdio.h>
#include<conio.h>
struct node
{
	int a : 8;
};
int main()
{
	struct node *a1;
	printf("%d",sizeof(a1));
	//scanf("%d", a1->a);
	getch();
}