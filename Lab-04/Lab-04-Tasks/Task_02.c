/*
A cinema charges ticket prices based on age:
 Age < 12 → 200
 Age between 12 and 18 → 300
 Age 18–60 → 500
 Age > 60 → 250
Write a program to calculate ticket price based on age entered by the user
*/

#include <stdio.h>

int main(){
    int userAge, ticketPrice;
    printf("Enter your age ");
    scanf("%d",&userAge);
    if (userAge < 12){
        ticketPrice = 200;
    }else if (userAge >= 12 && userAge < 18){
        ticketPrice = 300;
    }else if (userAge >= 18 && userAge <= 60){
        ticketPrice = 500;
    }else{
        ticketPrice = 250;
    }
    printf("Price for your ticket: $%d",ticketPrice);
    return 0;
}
