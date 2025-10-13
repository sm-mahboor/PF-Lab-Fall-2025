// A teacher has marks of 10 students stored in an array
// Write a program to calculate average marks (Take array as input from user)

#include <stdio.h>

int main(){
	float studentMarks[10];
	
	printf("Enter marks of 10 students 1 by 1:\n");
	
	int i;
	for (i = 0; i < 10; i++){
		scanf("%f",&studentMarks[i]);
	}
	
	//Calculating Average:
	float average, total = 0.0;
	for (i = 0; i < 10; i++){
		total += studentMarks[i];
	}
	average = total / 10;
	printf("Average Marks:  %.2f",average);
}
