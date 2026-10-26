#include <stdio.h>

int main(void) {
    int age = 15;
    if (age < 18) {
        goto denied;
    }
    printf("Allowed\n");
    return 0;

denied:
    printf("Access Denied\n");
    return 0;
}
