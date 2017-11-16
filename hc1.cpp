#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159265

int progressPie(int p, int x, int y){
	if (!((p >= 0 && p <= 100) && (x >= 0 && x <= 100) && (y >= 0 && y <= 100)))
	{
		return -1;
	}

	if (p == 0)
		return 1;
	x = x - 50; y = y - 50;
	if (((x*x) + (y*y)) > 2500)
		return 1;
	else{
		if (p == 25){
			if (x > 0 && y > 0)
				return 0;
			return 1;
		}
		if (p == 50){
			if (x > 0)
				return 0;
			return 1;
		}
		if (p == 75){
			if ((x>0)||(x < 0 && y < 0))
				return 0;
			return 1;
		}
		if (p == 100){
				return 0; //0.017444
		}
		if (p < 25){
			if (x > 0 && y > 0){
				if (x - y*tan((3.6*p*pi / 180)) < 0)
					 return 0;
			}
			return 1;
		}
		if (p < 50){
			if (x > 0){
				if (y + (x*tan((3.6*p-90)*pi / 180)) > 0)
					return 0;
			}
			return 1;
		}
		if (p < 75){
			if (x > 0)
				return 0;
			if (x < 0){
				if (x - (y*tan((3.6*p-180)*(pi / 180))) > 0)
					return 0;
				else
					return 1;
			}
			return 1;
		}
		if (p < 100){
			if (x > 0)
				return 0;
			if (x < 0 && y < 0)
				return 0;
			if (y + (x*tan((3.6*p-270)*(pi / 180))) < 0)
				return 0;
			return 1;
		}
	}
}

int main(){
	int n, p, x, y;
	FILE *f1,*op;
	f1 = fopen("progress_pie.txt", "r");
	op = fopen("output1.txt", "w+");
	fscanf(f1, "%d", &n);
	int i = 1;
	while (i<=n){
		fscanf(f1, "%d %d %d", &p, &x, &y);
		if (progressPie(p, x, y) == 0)
		{
			fprintf(op, "Case #%d: black\n", i);
		}
		else{
			fprintf(op, "Case #%d: white\n", i);
		}
		i++;
	}
}