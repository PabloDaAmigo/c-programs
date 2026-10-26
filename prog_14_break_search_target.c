#include <stdio.h>

int main(void) {
    int target = 4;
    for (int i = 1; i <= 10; i++) {
        if (i == target) {
            printf("Found %d!\n", i);
            break;
        }
    }
    return 0;
}
