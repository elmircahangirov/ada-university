#include <stdio.h>

int main(void){
    double highestRainfall; //highest rainfall ever recorded
    double currentRainfall; //rainfall in the current year
    
    printf("Enter the highest rainfall ever in one season: ");
    scanf("%lf", &highestRainfall);
    
    printf("Enter the rainfall in the current year: ");
    scanf("%lf", &currentRainfall);
    
    if(currentRainfall > highestRainfall){
        printf("New Record!\n");
        highestRainfall = currentRainfall;
        printf("The updated highest rainfall is: %.2f\n", highestRainfall);
        
    }
    
    return 0;
    
    
    
}
