#include <stdio.h>

int main(void) {
    int encryptedNumber;

    printf("Enter an encrypted four-digit integer to decrypt: ");
    if (scanf("%d", &encryptedNumber) == 1 && encryptedNumber >= 0 && encryptedNumber <= 9999) {
        
        int d1 = (encryptedNumber / 1000) % 10;
        int d2 = (encryptedNumber / 100) % 10;
        int d3 = (encryptedNumber / 10) % 10;
        int d4 = encryptedNumber % 10;

        
        int temp = d1;
        d1 = d3;
        d3 = temp;

        temp = d2;
        d2 = d4;
        d4 = temp;

       
        d1 = (d1 < 7) ? (d1 + 3) : (d1 - 7);
        d2 = (d2 < 7) ? (d2 + 3) : (d2 - 7);
        d3 = (d3 < 7) ? (d3 + 3) : (d3 - 7);
        d4 = (d4 < 7) ? (d4 + 3) : (d4 - 7);

        printf("Decrypted original integer: %d%d%d%d\n", d1, d2, d3, d4);
    } else {
        printf("Invalid input. Please enter a four-digit integer[cite: 29].\n");
    }

    return 0;
}
