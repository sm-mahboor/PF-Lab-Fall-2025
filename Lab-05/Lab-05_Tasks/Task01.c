/*Write a program to check if a student has passed. If marks ≥ 50, check if marks ≥ 85,
then display “Passed with Distinction”. Otherwise, display “Just Passed”.*/

#include <stdio.h>

int main(){
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    if (marks >= 50){
        if (marks >= 85){
            printf("Passed with Distinction");
        } else{
            printf("Just Passed");
        }
    }
    return 0;
}
