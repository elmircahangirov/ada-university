#include <stdio.h>

int main(void){
    int num1, num2;
    int sum, product, difference, quotient, remainder;
    
    printf("Enter first integer: "); //obtain the first number from the user
    scanf("%d", &num1);
    
    printf("Enter second integer: "); //obtain the second number from the user
    scanf("%d", &num2);
    
    sum = num1 + num2;
    product = num1 * num2;
    difference = num1 - num2;
    quotient = num1 / num2;
    remainder = num1 % num2;
    
    printf("Sum is %d\n", sum);
    printf("Product is %d\n", product);
    printf("Difference is %d\n", difference);
    printf("Quotient is %d\n", quotient);
    printf("Remainder is %d\n", remainder);
    
    return 0;
    
}
