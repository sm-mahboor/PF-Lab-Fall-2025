/*A user enters a text containing letters, digits, spaces, and special characters.
You want to create a program that extracts only the digits from the input and stores
them in an array. Then, calculate the sum of all extracted digits and display it.*/

#include <stdio.h>

int main(){
	char userInput[100], current;
	int digits[100], i=0, j=0;
	
	// Taking the string as user input:
	printf("Enter the string: ");
	scanf("%[^\n]%*c",userInput);
	
	// Going through string 1 character at a time and
	// extracting digits to store in digits[] array
	do {
		current = userInput[i];
		if (current == '\0'){
			break;
		} else{
			switch (current){
				case '0':
					digits[j] = 0;
					j+=1;
					break;
				case '1':
					digits[j] = 1;
					j+=1;
					break;
				case '2':
					digits[j] = 2;
					j+=1;
					break;
				case '3':
					digits[j] = 3;
					j+=1;
					break;
				case '4':
					digits[j] = 4;
					j+=1;
					break;
				case '5':
					digits[j] = 5;
					j+=1;
					break;
				case '6':
					digits[j] = 6;
					j+=1;
					break;
				case '7':
					digits[j] = 7;
					j+=1;
					break;
				case '8':
					digits[j] = 8;
					j+=1;
					break;
				case '9':
					digits[j] = 9;
					j+=1;
					break;
			}
		}
		i+=1;
	} while (1);
	
	// Calculating sum of all digits and displaying it:
	int sum = 0;
	for (i=0; i<j; i++){
		sum += digits[i];
	}
	printf("Sum of all digits in given string is %d",sum);
	
	return 0;
}
