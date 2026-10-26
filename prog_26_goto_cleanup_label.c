#include <stdio.h>

int main(void) {
    int error = 1;

    if (error == 1) {
        goto cleanup;
    }

    printf("Doing work...\n");

cleanup:
    printf("Cleaning up and exiting.\n");
    return 0;
}
