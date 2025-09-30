/*A nested switch program where user enters continent (Asia, Europe) and then a
country inside it (Asia → Pakistan, India; Europe → France, Germany).*/

#include <stdio.h>

int main(){
    int continent, country;
    printf("Enter the Continent Number:  ");
    scanf("%d",&continent);
    printf("Enter the Country Number:  ");
    scanf("%d",&country);
    switch (continent){
        case 1:
            printf("Continent is Asia!\n");
            switch (country){
                case 1:
                    printf("Country is Pakistan!\n");
                    break;
                case 2:
                    printf("Country is India\n");
                    break;
                default:
                    printf("Invalid Country Number!");
            }
            break;
        case 2:
            printf("Continent is Europe!\n");
            switch (country){
                case 1:
                    printf("Country is France!\n");
                    break;
                case 2:
                    printf("Country is Germany\n");
                    break;
                default:
                    printf("Invalid Country Number!");
            }
            break;
        default:
            printf("Invalid Continent Number!");
    }
    return 0;
}
