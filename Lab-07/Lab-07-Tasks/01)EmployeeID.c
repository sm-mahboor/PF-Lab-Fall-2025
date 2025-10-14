/*Take an array of 12 employee IDs. Write a program that checks
if a given employee ID exists in the array or not.*/

#include <stdio.h>

int main(){
	int employeeID[12];
	printf("Enter 12 Employee IDs to store:\n");
	int i;
	for (i = 0; i < 12; i++){
		scanf("%d",&employeeID[i]);
	}
	
	int IDtoFind, IDfound = 0;
	printf("Enter the Employee ID to look for:  ");
	scanf("%d",&IDtoFind);
	for (i = 0; i < 12; i++){
		if (IDtoFind == employeeID[i]){
			IDfound = 1;
			break;
		}
	}
	if (IDfound){
		printf("ID Found");
	}else{
		printf("ID Not Found");
	}
	return 0;
}
