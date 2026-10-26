#include <stdio.h>

int main(void) {
    int i = 3;

countdown:
    printf("%d ", i);
    i--;
    if (i > 0) {
        goto countdown;
    }
    printf("Go!\n");
    return 0;
}
