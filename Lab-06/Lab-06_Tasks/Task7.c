// Print Fibonacci series up to 10 terms using a for loop.

#include <stdio.h>

int main(){
    int tempCurrent, previous = 0, current = 1;
    for (int i=1; i<=10; i++){
        if (i==1){
            printf("0\n");
        } else{
            printf("%d\n",current);
            tempCurrent = current;
            current += previous;
            previous = tempCurrent;
        }
    }
    return 0;
}