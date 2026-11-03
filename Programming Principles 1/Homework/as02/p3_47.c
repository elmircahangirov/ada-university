#include <stdio.h>

int main(void) {
    int bMonth, bDay, bYear;
    int cMonth, cDay, cYear;

    
    printf("Enter user's birth date (month day year): ");
    scanf("%d %d %d", &bMonth, &bDay, &bYear);

    printf("Enter current date (month day year): ");
    scanf("%d %d %d", &cMonth, &cDay, &cYear);

    
    int age = cYear - bYear;
    if (cMonth < bMonth || (cMonth == bMonth && cDay < bDay)) {
        age--;
    }

    
    int maxHeartRate = 220 - age;

    
    double minTargetRate = maxHeartRate * 0.50;
    double maxTargetRate = maxHeartRate * 0.85;

    
    printf("\n--- Results ---\n");
    printf("Age: %d years[cite: 28]\n", age);
    printf("Maximum Heart Rate: %d beats per minute[cite: 28]\n", maxHeartRate);
    printf("Target-Heart-Rate Range: %.1f - %.1f beats per minute[cite: 28]\n", minTargetRate, maxTargetRate);

    return 0;
}
