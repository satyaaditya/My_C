#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
char * sort(char*, int);
void merge(char*, char*, char*, char*);
int fun(char);
int main()
{
	char *a, *b, *c, *d;
	a = (char*)malloc(20 * sizeof(char));
	b = (char*)malloc(20 * sizeof(char));
	c = (char*)malloc(20 * sizeof(char));
	d = (char*)malloc(20 * sizeof(char));
	printf("enteer 4 srings   ::  ");
	fgets(a, 20, stdin);
	fgets(b, 20, stdin);
	fgets(c, 20, stdin);
	fgets(d, 20, stdin);
	merge(a, b, c, d);
	getch();
}
void merge(char* a, char*b, char*c, char*d)
{
	int i = 0, m = 0,j=0, x;char *res = (char*)malloc(20 * sizeof(char));
	while (a[i] != '\n')
	{
		x = fun(a[i]);
		if (!(m & 1 << x))
		{
			m = m | 1 << x;
			res[j] = a[i];
			j++;i++;
		}
		else
			i++;
	}
	i = 0;
	while (b[i] != '\n')
	{
		x = fun(b[i]);
		if (!(m & 1 << x))
		{
			m = m | 1 << x;
			res[j] = b[i];
			j++;i++;
		}
		else
			i++;
	}
	i = 0;
	while (c[i] != '\n')
	{
		x = fun(c[i]);
		if (!(m & 1 << x))
		{
			m = m | 1 << x;
			res[j] = c[i];
			j++;i++;
		}
		else
			i++;
	}
	i = 0;
	while (d[i] != '\n')
	{
		x = fun(d[i]);
		if (!(m & 1 << x))
		{
			m = m | 1 << x;
			res[j] = d[i];
			j++;i++;
		}
		else
			i++;
	}
	res[j] = '\0';
	
	res=sort(res, j - 1);
	puts(res);
}
int fun(char a)
{
	int x;
	x = (int)a;
	x = x - 96;
	return x;
}
char *sort(char *a, int n)
{
	int i, j;
	char k;
	for (i = 0;i<n;i++)
	{
		for (j = 0;j<n - i - 1;j++)
		{
			if (a[j]>a[j + 1])
			{
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
	}
	return a;
}