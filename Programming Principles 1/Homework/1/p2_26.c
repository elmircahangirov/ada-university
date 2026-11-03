#include <stdio.h>

int main(void){
    int num1, num2;
    
    printf("Enter the integers: ");
    scanf("%d %d", &num1, &num2);
    
    if(num1 % num2 == 0){
        printf("The first number is a multiple of the second");
    }
    
    return 0;
}
