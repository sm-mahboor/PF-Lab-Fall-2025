/*Write a program using nested switch to select a device: (1=Phone, 2=Laptop). Inside
each, choose brand (Phone: 1=Samsung, 2=Apple; Laptop: 1=Dell, 2=HP).*/

#include <stdio.h>

int main(){
    int deviceNum, brandNum;
    printf("Enter the Device Number:  ");
    scanf("%d",&deviceNum);
    printf("Enter the Brand Number:  ");
    scanf("%d",&brandNum);
    switch (deviceNum){
        case 1:
            switch (brandNum){
                case 1:
                    printf("Samsung Phone");
                    break;
                case 2:
                    printf("Apple Phone");
                    break;
                default:
                    printf("Invalid Brand Number!");
            }
            break;
        case 2:
            switch (brandNum){
                case 1:
                    printf("Dell Laptop");
                    break;
                case 2:
                    printf("HP Laptop");
                    break;
                default:
                    printf("Invalid Brand Number!");
            }
            break;
        default:
            printf("Invalid Device Number!");
    }
    return 0;
}
