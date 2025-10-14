/*An array contains 12 numbers. Write a program to remove all occurrences
of a given number and shift remaining elements left.
For example user enters 1 , 2 , 4 , 5 , 7 ,7 , 7 ,8,9,10,10,11 as an array
want to remove 7 then the output will be 1 , 2 ,4,5, 8, 9 , 10, 10,11 */

#include <stdio.h>

int main(){
	int numArray[12],i,j,numRemove,maxIndex=11;
	
	printf("Enter the 12 numbers 1 by 1:\n");
	for (i=0; i<12; i++){
		scanf("%d",&numArray[i]);
	}
	
	printf("Initial contents in Array:\n");
	for (i=0; i<=maxIndex; i++){
		printf("%d  ",numArray[i]);
	}
	
	printf("\n\nEnter the number you want to remove:  ");
	scanf("%d",&numRemove);
	for (i=0; i<=maxIndex; i++){
		if (numArray[i] == numRemove){
			for (j=i; j<maxIndex; j++){
				numArray[j] = numArray[j+1];
			}
			numArray[maxIndex] = -1;
			maxIndex -= 1;
			i--;
		}
	}
	printf("\nContents in Array after removing %d:\n",numRemove);
	for (i=0; i<=maxIndex; i++){
		printf("%d  ",numArray[i]);
	}
	
	return 0;
}

