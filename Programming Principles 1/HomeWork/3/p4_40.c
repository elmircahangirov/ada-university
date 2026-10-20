#include <stdio.h>

int main(void)
{
    
    double population = 8300000000.0;
    double growthRate = 0.0083; // 0.83% annual growth rate
    double initialPopulation = population;
    
    int doubleYear = 0;

    printf("Year\tAnticipated Population\tNumerical Increase\n");
    printf("----------------------------------------------------\n");

    for (int year = 1; year <= 75; year++)
    {
        double numericalIncrease = population * growthRate;
        population += numericalIncrease;

        
        if (doubleYear == 0 && population >= (2.0 * initialPopulation))
        {
            doubleYear = year;
        }

        printf("%d\t%.0f\t\t\t%.0f\n", year, population, numericalIncrease);
    }

    printf("\n");
    if (doubleYear > 0)
    {
        printf("If this year's growth rate persists, the population will double in year %d.\n", doubleYear);
    }
    else
    {
        printf("The population does not double within the 75-year projection period.\n");
    }

    return 0;
}