#include <stdio.h>

int main(void) {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
        if (sum > 10) {
            printf("Stopped at sum: %d\n", sum);
            break;
        }
    }
    return 0;
}
