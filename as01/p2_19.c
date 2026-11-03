#include <stdio.h>

int main(void){
    int num1, num2, num3;
    int sum, average, product;
    int smallest, largest;
    
    printf("Enter three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    sum = num1 + num2 + num3;
    average = sum / 3;
    product = num1 * num2 * num3;
    
    smallest = num1;
    largest = num1;
    
    if(num2 < smallest){
        smallest = num2;
    }
    if(num3 < smallest){
        smallest = num3;
    }
    if(num2 > largest){
        largest = num2;
    }
    if(num3 > largest){
        largest = num3;
    }
    
    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);
    
    return 0;
}
