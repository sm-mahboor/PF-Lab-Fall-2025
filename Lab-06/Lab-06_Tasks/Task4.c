// Find the sum of numbers from 1 to 100 using a for loop.

#include <stdio.h>

int main(){
    int sum = 0;
    for (int i=1; i<=100; i++){
        sum += i;
    }
    printf("Sum = %d",sum);
    return 0;
}