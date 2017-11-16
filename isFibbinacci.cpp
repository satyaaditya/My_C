#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
bool isadditive(int *, int , int , int , int );
int main(){
	printf("enter size of sequence");
	int n;
	scanf("%d", &n);
	int *seq = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
		scanf("%d", &seq[i]);
	if (isadditive(seq,0,1,2, n))
		printf("additive");
	else
		printf("not additive");
	getch();
}
bool isadditive(int *seq,int pres,int next,int res, int len){
	if (res == len - 1)
	{
		if (seq[pres] + seq[next] == seq[res])
			return true;
		return false;
	}
	else{
		if (isadditive(seq,pres+1,next+1,res+1,len))
			return true;
		else
			return false;
	}
}