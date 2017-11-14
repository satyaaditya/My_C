#include<stdio.h>
#include<conio.h>
#define v 4;
#define INF 99999;
void fun(int[][4]);
void print(int[][4]);
void fun(int graph[][4])
{
	int dist[4][4], i, j, k;
	for (i = 0;i < 4;i++)
	{
		for (j = 0;j < 4;j++)
			dist[i][j] = graph[i][j];
	}
	for (k = 0;k < 4;k++)
	{
		for (i = 0;i < 4;i++)
		{
			for (j = 0;j < 4;j++)
			{
				if (dist[i][j]>dist[i][k] + dist[k][j])
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}
	print(dist);
}
void print(int dist[][4])
{
	for (int i = 0;i < 4;i++)
	{
		for (int j = 0;j < 4;j++)
		{
			if (dist[i][j] == 'INF')
				printf("%7s", "INF");
			else
				printf("%7d", dist[i][j]);
		}
		printf("\n");
	}
	
}
int main()
{
	int graph[4][4]={	{0,5,'INF',10},
						{'INf',0,3,'INF'},
						{'INF','INF',0,1},
						{'INF','INF','INF',0}
	
	};
	fun(graph);
	getch();
	return 0;
}