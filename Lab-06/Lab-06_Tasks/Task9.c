// Print multiplication table of a number entered by user.

#include <stdio.h>

int main(){
    int num, times;
    printf("Enter the number:  ");
    scanf("%d",&num);
    printf("Enter the number of rows you want for the table:  ");
    scanf("%d",&times);
    for (int i=1;i<=times;i++){
        printf("%d\tx\t%d\t=\t%d\n",num,i,num*i);
    }
    return 0;
}