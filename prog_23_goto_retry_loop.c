#include <stdio.h>

int main(void) {
    int attempts = 1;

try_again:
    printf("Attempt %d\n", attempts);
    if (attempts < 3) {
        attempts++;
        goto try_again;
    }
    printf("Done\n");
    return 0;
}
