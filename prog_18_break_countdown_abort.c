#include <stdio.h>

int main(void) {
    for (int i = 5; i >= 1; i--) {
        if (i == 2) {
            printf("Abort!\n");
            break;
        }
        printf("%d ", i);
    }
    return 0;
}
