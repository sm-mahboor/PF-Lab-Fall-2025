// Check if a number is prime (n=7) using a for loop.

#include <stdio.h>

int main(){
    int num, isPrime;
    printf("Enter the number:  ");
    scanf("%d",&num);
    isPrime = 1;
    if (num <= 1){
        isPrime = 0;
    } else{
        for (int i=num-1; i > 1; i--){
            if (num%i==0){
                isPrime = 0;
            }
        }
    }
    if (isPrime == 1){
        printf("%d is a Prime Number",num);
    } else{
        printf("%d is NOT a Prime Number",num);
    }
    return 0;
}