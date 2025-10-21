/*
Write a C program to find the union of two arrays.
Union means combining all unique elements from both arrays (no duplicates).

Input:
Array 1: 1 2 3 4
Array 2: 3 4 5 6

Output:
Union: 1 2 3 4 5 6
*/


#include <stdio.h>

int main(){
	int arr1Size, arr2Size, i, j, unionCount=0, duplicateFound;
	
	// Taking Array 1 as input:
	printf("Enter size of array 1: ");
	scanf("%d",&arr1Size);
	int array1[arr1Size];
	printf("Enter the elements of array 1 one by one:\n");
	for (i=0; i<arr1Size; i++){
		scanf("%d",&array1[i]);
	}
	
	printf("\n");	// White space
	
	// Taking Array 2 as input:
	printf("Enter size of array 2: ");
	scanf("%d",&arr2Size);
	int array2[arr2Size];
	printf("Enter the elements of array 2 one by one:\n");
	for (i=0; i<arr2Size; i++){
		scanf("%d",&array2[i]);
	}
	
	printf("\n");	// White Space
	
	// Creating a separate array, unionArray[], to store the union of elements:
	int unionArray[arr1Size + arr2Size];
	
	// Storing all elements of Array 1 in unionArray[]:
	for (i=0; i<arr1Size; i++){
		unionArray[i] = array1[i];
		unionCount += 1;
	}
	
	// Storing only those elements from Array 2 which are not already added:
	for (i=0; i<arr2Size; i++){
		duplicateFound = 0;
		for (j=0; j<unionCount; j++){
			if (unionArray[j] == array2[i]){	// Checking for duplicates
				duplicateFound = 1;
			}
		}
		if (!duplicateFound){
			unionArray[unionCount] = array2[i];
			unionCount += 1;
		}
	}
	
	// Displaying the union of 2 arrays:
	printf("Union: ");
	for (i=0; i<unionCount; i++){
		printf("%d  ",unionArray[i]);
	}
	
	return 0;
}
