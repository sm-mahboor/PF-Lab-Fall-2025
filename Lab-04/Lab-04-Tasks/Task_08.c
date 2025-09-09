// If the temperature is greater than 30°C, display "Hot Day", otherwise "Pleasant Day".

#include <stdio.h>

int main(){
    int temperature;
    printf("What is the temperature in degree celsius? ");
    scanf("%d",&temperature);
    if (temperature > 30){
        printf("Hot Day");
    } else{
        printf("Pleasant Day");
    }
    return 0;
}
