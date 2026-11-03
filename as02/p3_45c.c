#include <stdio.h>

int main(void) {
    int terms;
    double x;
    double sum = 1.0;
    double term = 1.0;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms to compute e^x: ");
    if (scanf("%d", &terms) == 1 && terms > 0) {
        for (int i = 1; i < terms; i++) {
            term *= x / i;
            sum += term;
        }
        printf("Estimated value of e^%.2f: %.10f\n", x, sum);
    }

    return 0;
}
