/*
ATM withdrawal rule:
 Balance must be greater than withdrawal amount
 Withdrawal amount must be a multiple of 500
if both conditions pass, allow withdrawal, else reject.
*/

#include <stdio.h>

int main(){
    int balance, withdrawalAmount;
    printf("What's the balance? ");
    scanf("%d",&balance);
    printf("What amount do you want to withdraw? ");
    scanf("%d",&withdrawalAmount);
    if ((balance >= withdrawalAmount) && (withdrawalAmount%500 == 0)){
        printf("Withdrawal Request Accepted");
    } else{
        printf("Withdrawal Request Rejected");
    }
    return 0;
}
