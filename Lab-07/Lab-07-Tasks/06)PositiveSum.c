/*You have an array of 10 integers representing daily profit/loss.
Write a program to sum only the positive values.*/

#include <stdio.h>

int main(){
	int profit_loss[10], positiveSum=0, i;
	printf("Enter the daily profit / loss for 10 days 1 by 1:\n");
	for (i=0; i<10; i++){
		scanf("%d",&profit_loss[i]);
	}
	
	//Positive Sum Calculation:
	for (i=0; i<10; i++){
		if (profit_loss[i] > 0){
			positiveSum += profit_loss[i];
		}
	}
	printf("Sum of profits is %d",positiveSum);
	
	return 0;
}
