#include <stdio.h>

int main(void) {
    for (char c = 'A'; c <= 'E'; c++) {
        if (c == 'C') {
            continue; // Skip 'C'
        }
        printf("%c ", c); // Prints: A B D E
    }
    printf("\n");
    return 0;
}
