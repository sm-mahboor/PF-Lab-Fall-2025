//Demonstrate bitwise left shift and right shift operators on an integer

#include <stdio.h>

int main(){
    int num, leftPlaces, rightPlaces, leftResult, rightResult;
    printf("Enter a number:  ");
    scanf("%d",&num);
    printf("Enter the number of places you want to perform the bitwise left shift: ");
    scanf("%d",&leftPlaces);
    printf("Enter the number of places you want to perform the bitwise right shift: ");
    scanf("%d",&rightPlaces);
    leftResult = num << leftPlaces;
    rightResult = num >> rightPlaces;
    printf("Result of performing Bitwise Left Shift on '%d' %d time results in %d\n",num,leftPlaces,leftResult);
    printf("Result of performing Bitwise Right Shift on '%d' %d time results in %d\n",num,rightPlaces,rightResult);
}
