//Write a program that toggles the 2nd bit of a number using XOR.

#include <stdio.h>

int main(){
    int number, xorResult;
    printf("Enter the number:  ");
    scanf("%d",&number);
    xorResult = number ^ 2;
    printf("Result after toggling 2nd bit:  %d",xorResult);
    return 0;
}
