#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        if (i == 2) {
            continue; // 1. Skip 2
        }
        if (i == 6) {
            break;    // 2. Stop loop at 6
        }
        printf("%d ", i); // Prints: 1 3 4 5
    }

    goto done;        // 3. Jump to end
    printf("Never printed\n");

done:
    printf("\nFinished!\n");
    return 0;
}
