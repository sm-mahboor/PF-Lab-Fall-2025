/*An array stores 10 numbers. Write a program to check whether
the array is sorted in ascending order.*/

#include <stdio.h>

int main(){
	int numbers[10], i;
	
	// Taking numbers as input and storing them in numbers[] array:
	printf("Enter the 10 numbers to store in array 1 by 1:\n");
	for (i=0; i<10; i++){
		scanf("%d",&numbers[i]);
	}
	
	// Checking if array is sorted:
	int is_sorted = 1;
	for (i=0; i<9; i++){
		if (numbers[i] > numbers[i+1]){
			is_sorted = 0;
			break;
		}
	}
	(is_sorted == 1)?(printf("Array is sorted in ascending order!")):(printf("Array is NOT sorted in ascending order!"));
}
