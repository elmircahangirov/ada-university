#include <stdio.h>

int main(void) {
    int die1, die2;
    int chance;
    int success = 0;

    printf("Let The Game Begin!\n");

    for (chance = 1; chance <= 3; chance++) {
        die1 = rand() % 6 + 1;   
        die2 = rand() % 6 + 1;   

        printf("Chance #%d: %d %d\n", chance, die1, die2);

        if (die1 == 6 && die2 == 6) {
            success = 1;
            break;              
        }
    }

    if (success == 1) {
        printf("Yeah, I rock at this!\n");
    } else {
        printf("Ahh, today is just not my day, I guess :(\n");
    }

    return 0;
}