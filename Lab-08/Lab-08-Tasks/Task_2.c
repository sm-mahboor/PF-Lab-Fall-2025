/*
Write a C program to find the intersection of two arrays.
Intersection means elements that are common in both arrays.
*/

#include <stdio.h>

int main(){
	int arr1Size, arr2Size, i, j, smaller, inscCount = 0;
	
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
	
	printf("\n");	// White space
	
	// Creating a separate array, intersection[], to store the intersecting elements:
	smaller = (arr1Size < arr2Size)?arr1Size:arr2Size;
	int intersection[smaller];
	
	// Comparing each element of array1 with all elements of array2
	// & adding only those elements which are found in both arrays:
	for (i=0; i<arr1Size; i++){
		for (j=0; j<arr2Size; j++){
			if (array1[i] == array2[j]){
				intersection[inscCount] = array1[i];
				inscCount += 1;
			}
		}
	}
	
	// Displaying the intersection:
	printf("Intersection: ");
	for (i=0; i<inscCount; i++){
		printf("%d  ",intersection[i]);
	}
	
	return 0;
}
