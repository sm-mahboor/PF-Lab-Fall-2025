// Find the factorial of a number (n=5) using a for loop.

#include <stdio.h>

int main(){
    int num, factorial;
    printf("Enter the number to find factorial of:  ");
    scanf("%d",&num);
    if (num == 0){
        factorial = 1;
    } else{
        factorial = 1;
        for(int i=1; i<=num;i++){
            factorial *= i;
        }
    }
    printf("Factorial of %d is %d",num,factorial);
    return 0;
}