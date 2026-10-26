#include <stdio.h>

int main(void) {
    int i = 1;
    do {
        printf("%d ", i);
        if (i == 3) {
            break;
        }
        i++;
    } while (i <= 5);
    printf("\n");
    return 0;
}
