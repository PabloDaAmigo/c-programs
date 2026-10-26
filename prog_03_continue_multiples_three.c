#include <stdio.h>

int main(void) {
    int i = 0;
    do {
        i++;
        if (i % 3 == 0) {
            continue; // Skip 3, 6
        }
        printf("%d ", i); // Prints: 1 2 4 5 7
    } while (i < 7);
    printf("\n");
    return 0;
}
