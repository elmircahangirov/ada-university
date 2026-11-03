#include <stdio.h>

int main(void) {
    int weightInPounds;
    int heightInInches;
    int bmi;

    
    printf("Enter weight in pounds: ");
    scanf("%d", &weightInPounds);

    printf("Enter height in inches: ");
    scanf("%d", &heightInInches);

    
    bmi = (weightInPounds * 703) / (heightInInches * heightInInches);

    
    printf("\nYour Body Mass Index (BMI) is: %d\n\n", bmi);

    
    puts("BMI VALUES");
    puts("Underweight: less than 18.5");
    puts("Normal:      between 18.5 and 24.9");
    puts("Overweight:  between 25 and 29.9");
    puts("Obese:       30 or greater");

    return 0;
}
