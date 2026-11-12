#include <stdio.h>

int main(void) {
    int x; //random number 
    int guess; // by the user
    int count = 0;

    x = rand() % 30 - 11;   //it takes the numbers between -12 and 19
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        count++;

        if (guess > x) {
            printf("Nope! Try smaller\n");
        } else if (guess < x) {
            printf("Nope! Try bigger\n");
        }
    } while (guess != x);

    printf("Now you got it!\n");
    printf("Total guesses you did to win: %d\n", count);

    return 0;
}