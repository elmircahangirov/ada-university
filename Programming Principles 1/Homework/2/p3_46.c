#include <stdio.h>

int main(void) {
    double population;
    double growthRate;

    
    printf("Enter current world population: ");
    scanf("%lf", &population);

    printf("Enter annual growth rate (e.g., 0.0084 for 0.84%%): ");
    scanf("%lf", &growthRate);

    printf("\nEstimated World Population (Next 5 Years):\n");
    
    
    for (int year = 1; year <= 5; year++) {
        population += population * growthRate;
        printf("Year %d: %.0f\n", year, population);
    }

    return 0;
}
