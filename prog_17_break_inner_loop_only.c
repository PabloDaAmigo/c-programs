#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == 3) {
                break; // Only stops the j loop
            }
            printf("(%d,%d) ", i, j);
        }
        printf("\n");
    }
    return 0;
}
