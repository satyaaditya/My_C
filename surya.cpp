#include<stdio.h>
#include<conio.h>
void display(int,int,int);
void check();
int a[3][3],s=0,p=0,m=0,n=0,i,j,k;
char s1[10];
	char s2[10];
int main()
{
	
	printf("\t**** Welcome Dudes *****\n");
	printf("Enter 1st player name: ");
	scanf("%s",&s1);
	printf("Enter 2nd player name: ");
	scanf("%s",&s2);
	printf("Please remember this to Play!!\n");
	printf("00 01 02\n10 11 12\n20 21 22\n");
	for(k=0;k<4;k++)
	{
		printf("It's %s's turn:",s1);
		scanf("%d%d",&m,&n);
		display(m,n,1);
		check();
		printf("It's %s's turn:",s2);
		scanf("%d%d",&m,&n);
		display(m,n,2);
		check();
	}
	printf("\n\tWell played guys\nIts a TIE");
	return 0;
}
void display(int m,int n,int p)
{
	a[m][n]=p;
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	printf("%d",a[i][j]);
	printf("\n");
    }
}
void check()
{
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		s=s+a[i][j];
		if(s==3&&(a[i][1]==a[i][0]))
		printf("Mr.%s Congratulations! You win",s1);
		//printf("No. 1 won");
		else if(s==6&&(a[i][1]==a[i][0]))
		printf("Mr.%s Congratulations! You win",s2);
		//printf("No. 2 won");
		else break;
	}
	s=0;
    }
    for(j=0;j<3;j++)
	{
	for(i=0;i<3;i++)
	{
		s=s+a[i][j];
		if(s==3&&(a[1][j]==a[2][j]))
		printf("Mr.%s Congratulations! You win",s1);
		//printf("No. 1 won");
		else if(s==6&&(a[1][j]==a[2][j]))
		printf("Mr.%s Congratulations! You win",s2);
		//printf("No. 2 won");
		else break;
	}
	s=0;
    }
    for(j=0;j<3;j++)
    {
    for(i=0;i<3;i++)
	{
		while((i+j)==2)
		{
		s=s+a[i][j];
		if(s==3&&(a[1][1]==a[2][0]))
		printf("Mr.%s Congratulations! You win",s1);
		else if(s==6&&(a[1][1]==a[2][0]))
		printf("Mr.%s Congratulations! You win",s2);
		//printf("No. 2 won");
		else break;
		}
		while(i==j)
		{
		s=s+a[i][j];
		if(s==3&&(a[1][1]==a[2][2]))
		printf("Mr.%s Congratulations! You win",s1);
		//printf("No. 1 won");
		else if(s==6&&(a[1][1]==a[2][2]))
		printf("Mr.%s Congratulations! You win",s2);
		//printf("No. 2 won");
		else break;
		}
	}	
    }
}
