//Write a program to count how many elements are common between two arrays.


#include <stdio.h>

int main(){
	int arr1Size, arr2Size, i, j, commonCount = 0;
	
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
	
	// Comparing each element of Array 1 with each element of Array 2
	// an incrementing commonCount whenever comparison is true:
	
	for (i=0; i<arr1Size; i++){
		for (j=0; j<arr2Size; j++){
			if (array1[i] == array2[j]){
				commonCount += 1;
			}
		}
	}
	
	// Displaying the result:
	printf("There are %d common elements",commonCount);
	
	return 0;
}
