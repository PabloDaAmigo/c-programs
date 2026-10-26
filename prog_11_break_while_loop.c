#include <stdio.h>

int main(void) {
    int i = 1;
    while (i <= 10) {
        if (i == 3) {
            break;
        }
        printf("%d ", i); // Prints: 1 2
        i++;
    }
    printf("\n");
    return 0;
}
