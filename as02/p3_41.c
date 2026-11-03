#include <stdio.h>

int main(void) {
    float radius;
    float pi = 3.14159f;

    printf("Enter the radius of the circle: ");
    if (scanf("%f", &radius) == 1) {
        
        float diameter = 2 * radius;
        float circumference = 2 * pi * radius;
        float area = pi * radius * radius;

        printf("Diameter: %.5f\n", diameter);
        printf("Circumference: %.5f\n", circumference);
        printf("Area: %.5f\n", area);
    }

    return 0;
}
