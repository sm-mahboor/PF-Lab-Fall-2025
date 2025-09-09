// A password checking system: If user enters "1234", print "Access Granted", else print "Access Denied".

#include <stdio.h>
#include <string.h>

int main(){
    char password[4];
    printf("Enter the password ");
    scanf("%s",password);
    if (strcmp(password,"1234")==0){
        printf("Access Granted");
    }else{
        printf("Access Denied");
    }
    return 0;
}
