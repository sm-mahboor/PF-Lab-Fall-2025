/*
Write a C program for character pattern
A
B C
D E F
G H I J
*/


#include <stdio.h>

int main(){
	int i, j, letter = 65, rows;
	
	printf("How many rows do you want? ");
	scanf("%d",&rows);
	printf("\n");
	
	for (i=0; i<rows; i++){
		for (j=0; j<=i; j++){
			printf("%c ",letter);
			letter += 1;
		}
		printf("\n");
	}
	
	return 0;
}
