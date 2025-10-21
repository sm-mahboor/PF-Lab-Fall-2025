/*
A school has 5 students and 3 subjects.
marks[5][3] =	{
				{80, 75, 90},
				{60, 70, 65},
				{78, 82, 88},
				{92, 85, 89},
				{55, 60, 58}
			   	};
Store the marks in a 2D array [5][3]. Find:
	> Total marks of each student.
	> Average marks of each subject.
*/


#include <stdio.h>

int main(){
	int marks[5][3] = { {80, 75, 90},
						{60, 70, 65},
						{78, 82, 88},
						{92, 85, 89},
						{55, 60, 58} };
	int studentTotal, subjectTotal, subjectAverage, i, j;
	
	for (i=0; i<5; i++){
		studentTotal = 0;
		for (j=0; j<3; j++){
			studentTotal += marks[i][j];
		}
		printf("Total of student %d = %d\n",i+1,studentTotal);
	}
	
	printf("\n");
	
	for (i=0; i<3; i++){
		subjectTotal = 0;
		for (j=0; j<5; j++){
			subjectTotal += marks[j][i];
		}
		subjectAverage = subjectTotal / 5;
		printf("Average of subject %d = %d\n",i+1,subjectAverage);
	}
	
	return 0;
}
