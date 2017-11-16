#include<stdio.h>
#include<stdlib.h>
int main(){
	bool flag = false;
	fflush(stdin);
	int no_ofTrips, boat_capacity, no_of_boats;
	scanf("%d%d%d", &no_ofTrips,&boat_capacity,&no_of_boats);
	if (no_ofTrips <= 0 || boat_capacity <= 0 || no_of_boats <= 0)
		printf("No");
	else if (no_of_boats > 100)
		printf("No");
	else{
		while (no_ofTrips > 0){
			int num;
			scanf("%d", &num);
			if (boat_capacity*no_of_boats < num){
				flag = true;
				break;
			}
			no_ofTrips--;
		}
		if (flag)
			printf("No");
		else
			printf("Yes");	
	}
}