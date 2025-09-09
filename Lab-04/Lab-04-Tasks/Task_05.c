/*
A calculator program:
Ask the user to enter two numbers and a choice:
 Addition
 Subtraction
 Multiplication
 Division
Perform the selected operation using switch case
*/

#include <stdio.h>

int main(){
    float num1, num2, result;
    char operation;
    printf("CALCULATOR\n");
    printf("Choose an Operation:\n");
    printf("> Addition (+)\n");
    printf("> Subtraction (-)\n");
    printf("> Multiplication (*)\n");
    printf("> Division (/)\nYour Choice: ");
    scanf("%c",&operation);
    printf("Enter the first number ");
    scanf("%f",&num1);
    printf("Enter the second number ");
    scanf("%f",&num2);
    switch (operation){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
    }
    printf("Result: %f",result);
    return 0;
}
