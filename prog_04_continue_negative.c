#include <stdio.h>

int main(void) {
    for (int i = -3; i <= 3; i++) {
        if (i < 0) {
            continue; // Skip negative numbers
        }
        printf("%d ", i); // Prints: 0 1 2 3
    }
    printf("\n");
    return 0;
}
