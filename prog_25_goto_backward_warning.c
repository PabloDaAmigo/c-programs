#include <stdio.h>

int main(void) {
    int count = 0;

alert:
    printf("Beep! ");
    count++;
    if (count < 3) {
        goto alert;
    }
    printf("\n");
    return 0;
}
