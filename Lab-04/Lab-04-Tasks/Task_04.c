/*
A bank approves a loan if:
 Salary ≥ 40,000 AND
 Age ≥ 25.
Otherwise loan is rejected.
Write a program to ask salary and age, then display whether the loan is approved or not
*/

#include <stdio.h>

int main(){
    int salary, age;
    printf("Enter your salary ");
    scanf("%d",&salary);
    if (salary >= 40000){
        printf("What's your age? ");
        scanf("%d",&age);
        if (age >= 25){
            printf("Loan Approved!\n");
        } else{
            printf("Loan Not Approved!\n");
        }
    } else{
        printf("Loan Not Approved!");
    }
    return 0;
}
