//Write a program that checks if a number is odd or even using bitwise &.

#include <stdio.h>

int main(){
    int before, after, isEven;
    printf("Enter the number:  ");
    scanf("%d",&before);
    after = before & 1;
    (after == 0)?printf("It is Even"):printf("It is Odd");
    return 0;
}
