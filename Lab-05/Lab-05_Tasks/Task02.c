/*Write a program that takes age and gender. If age ≥ 18 and gender = male, print
“Adult Male”, else if female, “Adult Female”, otherwise “Minor”.*/

#include <stdio.h>
#include <string.h>

int main(){
    int age;
    char gender[10];
    printf("Enter your age:  ");
    scanf("%d",&age);
    printf("Enter your gender (Male/Female):  ");
    scanf("%s",gender);
    if (age >= 18){
        if (strcmp(gender,"male")==0 || strcmp(gender,"Male")==0){
            printf("Adult Male");
        } else if (strcmp(gender,"female")==0 || strcmp(gender,"Female")==0){
            printf("Adult Female");
        }
    } else{
        printf("Minor");
    }
    return 0;
}
