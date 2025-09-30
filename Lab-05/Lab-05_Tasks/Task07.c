//Use a nested ternary operator to find the smallest of three numbers

#include <stdio.h>

int main(){

    int num1,num2,num3,smallest;

    printf("Enter the first number:  ");
    scanf("%d",&num1);
    printf("Enter the first number:  ");
    scanf("%d",&num2);
    printf("Enter the first number:  ");
    scanf("%d",&num3);

    (num1<num2)?((num1<num3)?(smallest=num1):(smallest=num3)):((num2<num3)?(smallest=num2):(smallest=num3));

    printf("Smallest number is: %d",smallest);

    return 0;
}
