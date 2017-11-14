
 main()
{
  int n,j=0,i=0;
  f=&i;
  while(4)
  {
  	printf("enter ur choice \n 1.for push \n2.for pop \n3.for exit");
  	scanf("%d",&n);
  	switch(n)
  	{
  		case 1 : push();
  		break;
  		case 2 : pop();
  		break;
  		case 3 : goto y;
  	}
  }	
y : getch();
}
void push()
{
	int k;
	k= ifu();
	if(k==1)
	{
		printf("\n now ur enteringg a[%d]",*f);
		scanf("%d",*f);
		*f=*f+1;
	}}
	int ifu()
	{
		if(*f>9)
		{
			printf("\n stack over flow");
			return 0;
		}
	else
	return 1;
	}
	void pop()
	{
		t=ie();
		printf("%d",*f);
		if(t==1)
		{
			while(t<*f)
{
	a[t-1]=a[t];
	t+=1;
}
*f=*f-1;
for(t=0;t<*f;t++)
printf("%d",a[t]);
		}

	}
	int ie()
	{
if(*f==0)
{
	printf("not allowed");
	return 0;
}
	else 
	return 1;
	
}		
	
