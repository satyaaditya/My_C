#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void eval(int *, int*);
int samyr(int, int, int, int);
int difyr(int, int, int, int,int,int);
int fun(int);
int main()
{
	int *a = (int*)malloc(8 * sizeof(int));
	int *b = (int*)malloc(8 * sizeof(int));
	printf("enter a");
	for (int i = 0;i < 8;i++) 
		scanf("%d", &a[i]);
	fflush(stdin);
	printf("enter b");
	for (int i = 0;i < 8;i++)
		scanf("%d", &b[i]);
	eval(a, b);
	getch();
}
void eval(int *a, int *b)
{
//	printf("1\n");
	int i = 0, s = 0, month1=0, month2=0,year1=0,year2=0;
	int date1 = 0, date2 = 0;
	if (i <= 4)
	{
		int count = 1;
				while (i <= 3)
		{
			if (i >= 0 && i <= 1)
			{
				while (count >= 0) {
					date1 = date1 + a[i] * pow(10, count);
					date2 = date2 + b[i] * pow(10, count);
					count--;i++;
				}
			}
			else if (i >= 2 && i <= 3)
			{
				count = 1;
				while (count >= 0) {
					month1 = month1 + a[i] * pow(10, count);
					month2 = month2 + b[i] * pow(10, count);
					i++;count--;
				}
			}
		}
	}
		 if (i == 4)
	{
		int count = 3;
		while (count >= 0)
		{
			year1 = year1 + a[i] * pow(10, count);
			year2 = year2 + b[i] * pow(10, count);
			i++;count--;
		}
	}
		printf("%d %d\n%d %d\n %d %d\n",date1, date2, month1, month2, year1, year2);
		if (year1 == year2)
		{
			s=s+samyr(date1, date2, month1, month2);
			printf("no:of days present are :::: %d", s);
		}
		else
		{
			s = s + difyr(date1, date2, month1, month2,year1,year2);
			printf("no:of days present are :::: %d", s);
		}
	}
int fun(int n)
{
	if (n == 2)
	{
		if (n % 4 == 0)
			return 29;
		else
			return 28;
	}
	else if (n <= 7)
	{
		if (n % 2 == 0)
			return 30;
		else
			return 31;
	}
	else if (n > 7)
	{
		if (n % 2 == 0)
			return 31;
		else 
			return 30;
	}
}
int samyr(int date1, int date2, int month1, int month2)
{ 
	int s = 0,n=0;
	if (month1 != month2&&month1<13&&month2<13)
	{
		n = fun(month1);
		s = s + (n - date1);
		month1++;
		while (month1 < month2)
		{
			n = fun(month1);
			s = s + n;
			month1++;
		}
		s = s + date2;
	}
	else if(month1==month1&&month1<13 && month2<13)
	{
	s=s+date2 - date1;
	}
	return s;
}
int difyr(int date1, int date2, int month1, int month2, int year1, int year2)
{
	int n = 0,s=0;
	n = fun(month1);
	s = s + (n - date1);
	s=s+samyr(0, 31, month1 + 1, 12);
	n = year2 - year1-1;
	if (n > 0)
	{
		s = s + (n * 365);
		n = (year1 - year2) / 4;
		s = s + n;
	}
	s = s + samyr(0, date2, 1, month2);
	return s;
}