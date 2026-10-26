#include <stdio.h>

int main(void) {
    printf("1 ");
    goto skip;
    printf("2 "); // Skipped

skip:
    printf("3\n"); // Prints: 1 3
    return 0;
}
