//Write a program that takes three numbers and finds the largest number using nested if

#include <stdio.h>

int main(){
    int num1, num2, num3, largest;
    printf("Enter the three numbers one by one\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    if (num1 > num2){
        if (num1 > num3){
            largest = num1;
        } else{
            largest = num3;
        }
    } else{
        if (num2 > num3){
            largest = num2;
        } else{
            largest = num3;
        }
    }
    printf("%d is largest\n",largest);
    return 0;
}
