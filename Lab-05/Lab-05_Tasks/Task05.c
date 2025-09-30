/*Write a program that checks whether a given number is divisible by both 2 and 3
using logical operators.*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter the number:  ");
    scanf("%d",&num);
    if (num%2==0 && num%3 == 0){                                //Use of Logical AND Operator (&&)
        printf("%d IS divisible by both 2 and 3",num);
    } else{
        printf("%d IS NOT divisible by both 2 and 3",num);
    }
    return 0;
}
