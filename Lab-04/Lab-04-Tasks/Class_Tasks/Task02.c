/*
Ask the user to enter their nationality and age, and if the age is greater than 18
and nationality is "Pakistani" print "you are eligible" otherwise not.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char nationality[15];
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("Enter your nationality\n");
    scanf("%s",nationality);
    if ((age>18)&&(strcmp(nationality,"Pakistani")==0)){
        printf("You are eligible");
    } else{
        printf("You are not eligible");
    }
}