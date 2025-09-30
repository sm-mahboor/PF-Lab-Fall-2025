// Check if a number is palindrome (n=121) using a while loop.

#include <stdio.h>

int main(){
    int number, numberSave, remainder, reversed=0;
    printf("Enter the number:  ");
    scanf("%d",&number);
    numberSave = number;
    while (number != 0){
        remainder = number % 10;
        reversed = (reversed * 10) + remainder;
        number = number / 10;
    }
    (numberSave == reversed)?printf("%d is a Pallindrome!",numberSave):printf("%d is NOT a Pallindrome!",numberSave);
    return 0;
}