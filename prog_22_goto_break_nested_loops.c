#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i == 2 && j == 2) {
                goto stop_both; // Breaks out of BOTH loops at once
            }
            printf("(%d,%d) ", i, j);
        }
    }

stop_both:
    printf("\nExited all loops.\n");
    return 0;
}
