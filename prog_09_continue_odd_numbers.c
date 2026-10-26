#include <stdio.h>

int main(void) {
    int i = 0;
    while (i < 6) {
        i++;
        if (i % 2 != 0) {
            continue; // Skip 1, 3, 5
        }
        printf("%d ", i); // Prints: 2 4 6
    }
    printf("\n");
    return 0;
}
