/*A shopkeeper gives a discount of 10% if the total bill is more than 5000, otherwise
no discount.
Write a program to ask the user for the bill amount and display the final payable
amount..*/

#include <stdio.h>

int main(){
    float billAmount, finalAmount;
    printf("Enter your bill amount ");
    scanf("%f",&billAmount);
    if(billAmount > 5000){
        finalAmount = 0.9 * billAmount;
    }else{
        finalAmount = billAmount;
    }
    printf("Final amount is %f",finalAmount);
    return 0;
}
