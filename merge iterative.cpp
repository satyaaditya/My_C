#include<stdio.h>
#include<stdlib.h>
long int* merge(long int*,long int*,long int);
int main()
{
   long	int *a,n,*b,*c;
   int i;
	scanf("%ld",&n);
	a=(long int*)malloc(n*sizeof(long int));
	b=(long int*)malloc(n*sizeof(long int));
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    c=merge(a,b,n);
   for(i=0;i<n;i++)
   printf("%d",c[i]);
}
long int* merge(long int *a,long int *b,long int num)
{
    int rght, wid, rend;
    int i,j,m,t;

    for (int k=1; k < num; k *= 2 ) {       
        for (int left=0; left+k < num; left += k*2 ) {
            rght = left + k;        
            rend = rght + k;
            if (rend > num) rend = num; 
            m = left; i = left; j = rght; 
            while (i < rght && j < rend) { 
                if (a[i] <= a[j]) {         
                    b[m] = a[i]; i++;
                } else {
                    b[m] = a[j]; j++;
                }
                m++;
            }
            while (i < rght) { 
                b[m]=a[i]; 
                i++; m++;
            }
            while (j < rend) { 
                b[m]=a[j]; 
                j++; m++;
            }
            for (m=left; m < rend; m++) { 
                a[m] = b[m]; 
            }
        }
    }
return a;
}
