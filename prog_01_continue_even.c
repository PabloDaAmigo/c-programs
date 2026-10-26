#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 6; i++) {
        if (i % 2 == 0) {
            continue; // Skip 2, 4, 6
        }
        printf("%d ", i); // Prints: 1 3 5
    }
    printf("\n");
    return 0;
}
