/*Take an array from user that stores the ages of 8 participants.
Write a program to find the youngest participant’s age.*/

#include <stdio.h>

int main(){
	int ages[8],youngest,i;
	printf("Enter the ages of 8 participants 1 by 1:\n");
	for (i=0; i<8; i++){
		scanf("%d",&ages[i]);
		if (i==0){
			youngest = ages[i];
		} else{
			if (ages[i] < youngest){
				youngest = ages[i];
			}
		}
	}
	printf("Age of youngest participant is %d.",youngest);
	return 0;
}
