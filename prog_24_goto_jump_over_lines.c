#include <stdio.h>

int main(void) {
    printf("A ");
    goto jump_to_c;
    printf("B ");

jump_to_c:
    printf("C\n");
    return 0;
}
