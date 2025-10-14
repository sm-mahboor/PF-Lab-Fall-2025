/*4)You have an array of 6 numbers. Write a program to shift all elements one
position to the right, moving the last element to the first position.*/

#include <stdio.h>

int main(){
	int numArray[6],i,temp;
	
	printf("Enter 6 numbers 1 by 1 to store in the array:\n");
	for (i=0; i<6; i++){
		scanf("%d",&numArray[i]);
	}
	
	printf("\nArray Before Shifting:\n");
	for (i=0; i<6; i++){
		printf(" %d ",numArray[i]);
	}
	printf("\n");
	
	//Shifting:
	temp = numArray[5];
	for (i=5; i>0; i--){
		numArray[i] = numArray[i-1];
	}
	numArray[0] = temp;
	
	printf("\nArray After Shifting:\n");
	for (i=0; i<6; i++){
		printf(" %d ",numArray[i]);
	}
	
	return 0;
}

