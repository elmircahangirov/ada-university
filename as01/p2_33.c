#include <stdio.h>

int main(void) {
    int totalMiles;
    int costPerGallon;
    int avgMilesPerGallon;
    int parkingFee;
    int toll;
    int dailyCost;

    puts("Car-Pool Savings Calculator");

    
    printf("Enter total miles driven per day: ");
    scanf("%d", &totalMiles);

    
    printf("Enter cost per gallon of gasoline (in cents): ");
    scanf("%d", &costPerGallon);

    
    printf("Enter average miles per gallon: ");
    scanf("%d", &avgMilesPerGallon);

    
    printf("Enter parking fees per day (in cents): ");
    scanf("%d", &parkingFee);

    
    printf("Enter tolls per day (in cents): ");
    scanf("%d", &toll);

    
    int gallonsUsed = totalMiles / avgMilesPerGallon;
    int gasolineCost = gallonsUsed * costPerGallon;
    dailyCost = gasolineCost + parkingFee + toll;

    
    printf("\nYour total daily driving cost is: %d cents\n", dailyCost);

    return 0;
}
