// Keep taking input until user enters 0.

#include <stdio.h>

int main(){
    int num;
    do{
        printf("Enter Number:  ");
        scanf("%d",&num);
    } while (num != 0);
    printf("THE END");
}