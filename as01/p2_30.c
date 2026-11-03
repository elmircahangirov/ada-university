#include <stdio.h>

int main(void) {

    printf("Enter a five-digit integer: ");
    
    int num;
    scanf("%d", &num);
    
   
    int d1 = num / 10000;
    int d2 = (num % 10000) / 1000;
    int d3 = (num % 1000) / 100;
    int d4 = (num % 100) / 10;
    int d5 = num % 10;
    
   
    printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);
    
    return 0;
}
