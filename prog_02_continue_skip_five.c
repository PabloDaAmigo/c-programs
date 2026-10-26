#include <stdio.h>

int main(void) {
    int i = 0;
    while (i < 6) {
        i++;
        if (i == 5) {
            continue; // Skip 5
        }
        printf("%d ", i); // Prints: 1 2 3 4 6
    }
    printf("\n");
    return 0;
}
