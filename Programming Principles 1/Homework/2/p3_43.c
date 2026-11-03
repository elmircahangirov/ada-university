#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter three nonzero integer values: ");
    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        
        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            printf("These values could represent the sides of a triangle.\n");
        } else {
            printf("These values could not represent the sides of a triangle.\n");
        }
    }

    return 0;
}
