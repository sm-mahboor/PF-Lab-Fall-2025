/*
Temperature Record System:
A city records temperatures for 7 days in 3 different shifts (morning, afternoon, night).
Store this data in a 2D array [7][3] and:
Display the temperature table,
Find the average temperature for each day,
*/

#include <stdio.h>

int main(){
	float temperatures[7][3], average;
	int days,timings,i,j;
	
	// Taking data as user input:
	printf("ENTER THE TEMPERATURES\n");
	for (days=0; days<7; days++){
		printf("Day: ");
		switch (days){
			case 0:
				printf("Monday\n");
				break;
			case 1:
				printf("Tuesday\n");
				break;
			case 2:
				printf("Wednesday\n");
				break;
			case 3:
				printf("Thursday\n");
				break;
			case 4:
				printf("Friday\n");
				break;
			case 5:
				printf("Saturday\n");
				break;
			case 6:
				printf("Sunday\n");
				break;
		}
		for (timings=0; timings<3; timings++){
			switch(timings){
				case 0:
					printf("\tMorning Temperature (in C): ");
					break;
				case 1:
					printf("\tAfternoon Temperature (in C): ");
					break;
				case 2:
					printf("\tNight Temperature (in C): ");
					break;
			}
			scanf("%f",&temperatures[days][timings]);
		}
	}
	
	printf("\n\n");	//White space
	
	// Displaying as Table:
	printf("DAY\t\tMORNING\t\tEVENING\t\tNIGHT\t\tAVERAGE\n\n");
	for (i=0; i<7; i++){
		switch(i){
			case 0:
				printf("Monday\t\t");
				break;
			case 1:
				printf("Tuesday\t\t");
				break;
			case 2:
				printf("Wednesday\t");
				break;
			case 3:
				printf("Thursday\t");
				break;
			case 4:
				printf("Friday\t\t");
				break;
			case 5:
				printf("Saturday\t");
				break;
			case 6:
				printf("Sunday\t\t");
				break;
		}
		for (j=0; j<3; j++){
			printf("%.1f C\t\t",temperatures[i][j]);
		}
		average = (temperatures[i][0] + temperatures[i][1] + temperatures[i][2]) / 3;
		printf("%.1f C\n",average);
	}
	
	return 0;
}
