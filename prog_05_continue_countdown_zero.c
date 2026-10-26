#include <stdio.h>

int main(void) {
    for (int i = 3; i >= -3; i--) {
        if (i == 0) {
            continue; // Skip 0
        }
        printf("%d ", i); // Prints: 3 2 1 -1 -2 -3
    }
    printf("\n");
    return 0;
}
