#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,prev,cur,t,r;long long c;
	long n;
	scanf("%d",&t);
	if(t<1||t>5)
	exit(0);
	while(t>0)
{  c=0;
	scanf("%d",&n);
	if(n<1||n>100000)
	exit(0);
	else
	{
	scanf("%d",&prev);
	r=1;
	for(i=0;i<n-1;i++)
	{
	scanf("%d",&cur);
	if(cur>=prev)
	r++;
	else
{
	c+=(r*(r+1))/2;	
	r=1;
}	
prev=cur;
}

}
	c+=(r*(r+1))/2;	
	printf("\n%d",c);
	t--;

}
}
