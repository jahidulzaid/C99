#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int number;
    printf("Enter a 5-digit number: " );
    if (scanf("%d", &number) != 1 || number < 10000 || number > 99999) {
        printf("Invalid input\n");
        return 1;
    }

    char symbols[5];
    printf("Digits (in reverse order):");
    for (int i = 0; i < 5; i++) {
        symbols[i] = '0' + number % 10;
        number /= 10;
        printf(" %c", symbols[i]);
    }
    printf("\n");

    /* https://en.wikipedia.org/wiki/Fisher#Yates_shuffle */
    srand((unsigned) time(NULL));
    char swap;
    for (int i = 4; i > 0; i--) {
        int j = rand() % (i + 1);
        swap = symbols[i], symbols[i] = symbols[j], symbols[j] = swap;
    }

    printf("Random permutation: ");
    for (int i = 0; i < 5; i++)
        printf("%c", symbols[i]);
    printf("\n");

    printf("Password: ");
    for (int i = 0; i < 5; i++)
        printf("%c", symbols[i] - '0' + (rand() % 2 == 0 ? 'a' : 'A'));
    for (int i = 4; i >= 0; i--)
        printf("%c", (rand() % 2 == 0 ? 'Z' : 'z') - (symbols[i] - '0'));
    printf("\n");

    return 0;
}