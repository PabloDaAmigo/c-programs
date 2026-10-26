#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Stop completely
        }
        printf("%d ", i); // Prints: 1 2 3 4
    }
    printf("\n");
    return 0;
}
