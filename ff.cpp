#include<stdio.h>
#include<conio.h>
main()
{
	char name[]="India";
	int x,count=0;
	for(x=0;x<5;x++)
	{	
			if(name[x]=='I'||9)
		{
		printf("\n%c",name[x]);
			count++;
	}
			
	}
	printf("%d",count);
}
