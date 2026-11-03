#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter three nonzero integers: ");
    if (scanf("%d %d %d", &a, &b, &c) == 3) {
       
        if ((a * a + b * b == c * c) ||
            (a * a + c * c == b * b) ||
            (b * b + c * c == a * a)) {
            printf("These values could represent the sides of a right triangle.\n");
        } else {
            printf("These values could not represent the sides of a right triangle.\n");
        }
    }

    return 0;
}
