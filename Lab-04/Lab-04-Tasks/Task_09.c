/*
A student can only appear in the final exam if:
 Attendance ≥ 75% AND
 Internal marks ≥ 40.
*/

#include <stdio.h>

int main(){
    int attendance, internalMarks;
    printf("Enter your Internal Marks ");
    scanf("%d",&internalMarks);
    if (internalMarks >= 40){
        printf("Enter your Attendance Percentage ");
        scanf("%d",&attendance);
        if (attendance >= 75){
            printf("You CAN appear in Final Exam!");
        } else{
            printf("You CANNOT appear in Final Exam!");
        }
    } else{
        printf("You CANNOT appear in Final Exam!");
    }
    return 0;
}
