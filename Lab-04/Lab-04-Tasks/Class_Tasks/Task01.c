/*
Ask user their Email and password and give access if correct. Scan email first and if
email equals to admin@gmail.com then ask for the password which should be admin123.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char userEmail[15];
    char userPwd[8];
    printf("Enter the email\n");
    scanf("%s",userEmail);
    if (strcmp(userEmail,"admin@gmail.com")==0){
        printf("Enter the password\n");
        scanf("%s",userPwd);
        if (strcmp(userPwd,"admin123")==0){
            printf("Access Granted!");
        } else{
            printf("Wrong Password!");
        }
    } else{
        printf("Wrong Email ID!");
    }
    return 0;
}