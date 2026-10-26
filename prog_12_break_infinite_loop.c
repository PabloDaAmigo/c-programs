#include <stdio.h>

int main(void) {
    int count = 1;
    while (1) {
        printf("%d ", count);
        if (count == 4) {
            break; // Exit infinite loop
        }
        count++;
    }
    printf("\n");
    return 0;
}
