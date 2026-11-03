#include <stdio.h>

int main(void) {
    int terms;
    double e = 1.0;
    double factorial = 1.0;

    printf("Enter the number of terms to estimate e: ");
    if (scanf("%d", &terms) == 1 && terms > 0) {
        for (int i = 1; i < terms; i++) {
            factorial *= i;
            e += 1.0 / factorial;
        }
        printf("Estimated value of e: %.10f\n", e);
    }

    return 0;
}
