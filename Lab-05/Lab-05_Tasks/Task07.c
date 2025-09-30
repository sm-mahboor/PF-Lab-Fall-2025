//Demonstrate the effect of pre-increment and post-increment operators with an example.

#include <stdio.h>

int main(){
    int a,b;
    printf("\t\t\t\t\tPRE-INCREMENT\n");
    printf("Pre-Increment will increment (add 1 to) the value of a variable BEFORE it is assigned to another variable\n");
    printf("Pre-Increment is written as: 'a = ++b'\n");
    printf("In the above given example, if the initial value of 'b' is 5, for example, it will be incremented to 6 BEFORE 'a' is updated.\n");
    printf("For this reason, 'a' will become 6.\n\n");
    printf("TEST FOR PRE-INCREMENT:\n");
    printf("Enter a value for 'b':  ");
    scanf("%d",&b);
    a = ++b;
    printf("Value of 'a' after running the statement 'a = ++b': %d\n",a);
    printf("Value of 'b' after running the statement 'a = ++b': %d\n",b);


    printf("\n\n\n\n");


    int c,d;
    printf("\t\t\t\t\tPOST-INCREMENT\n");
    printf("Post-Increment will increment (add 1 to) the value of a variable AFTER it is assigned to another variable\n");
    printf("Post-Increment is written as: 'c = d++'\n");
    printf("In the above given example, if the initial value of 'd' is 5, for example, it will be incremented to 6 AFTER 'c' is updated.\n");
    printf("For this reason, 'c' will become 5.\n\n");
    printf("TEST FOR PRE-INCREMENT:\n");
    printf("Enter a value for 'd':  ");
    scanf("%d",&d);
    c = d++;
    printf("Value of 'c' after running the statement 'c = d++': %d\n",c);
    printf("Value of 'd' after running the statement 'c = d++': %d\n",d);


    return 0;
}
