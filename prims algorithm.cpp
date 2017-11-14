#include<stdio.h>
#include<conio.h>
#define max 10
void readmatrix();
int span(int);
int adj[max][max],tree[max][max],n;
void display(int);
void readmatrix()
{
	int i,j;
	printf("\nenter no of nodes\n");
	scanf("%d",&n);
	printf("\n enter adjacency matrix\n");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	scanf("%d",&adj[i][j]);	
}
int main()
{
	int treecost,source;
	readmatrix();
	printf("\nenter source");
	scanf("%d",&source);
   treecost=span(source);
   display(treecost);
   getch();
   return 0;
}
int span(int source)
{
	int visited[max],d[max],parent[max];
	int i,j,k,cost,u,v,min;
	for(i=1;i<=n;i++)
	{
		visited[i]=0;
		d[i]=adj[source][i];
		parent[i]=source;
	}
	k=1;
	cost=0;
	visited[source]=1;
	for(i=1;i<n;i++)
	{
	min=99;
		for(j=1;j<=n;j++)
		{
			if(visited[j]==0&&d[j]<min)
			{
				min=d[j];
				u=j;
				cost+=d[u];
			}
		}
		visited[u]=1;
		tree[k][1]=parent[u];
		tree[k++][2]=u;
		for(v=1;v<=n;v++)
		{
			if(visited[v]==0&&adj[u][v]<d[v])
			{
				parent[v]=u;
				d[v]=adj[u][v];
			}
		}
	}
return cost;
}
void display(int cost)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("\n%d->%d",tree[i][1],tree[i][2]);
	}
printf("\n%d is cost",cost);
}
