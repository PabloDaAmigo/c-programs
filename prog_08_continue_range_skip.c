#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        if (i >= 3 && i <= 7) {
            continue; // Skip 3, 4, 5, 6, 7
        }
        printf("%d ", i); // Prints: 1 2 8 9 10
    }
    printf("\n");
    return 0;
}
