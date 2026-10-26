#include <stdio.h>

int main(void) {
    int i = 1;

repeat:
    printf("%d ", i);
    i++;
    if (i <= 5) {
        goto repeat; // Jump back to repeat
    }
    printf("\n");
    return 0;
}
