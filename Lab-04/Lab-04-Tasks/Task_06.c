//A program asks the user for their age. If they are 18 or older, print "Eligible to Vote" otherwise print "Not Eligible".

#include <stdio.h>

int main(){
    int userAge;
    printf("Enter your age ");
    scanf("%d",&userAge);
    if (userAge >= 18){
        printf("Eligible to Vote");
    } else{
        printf("Not Eligible");
    }
    return 0;
}
