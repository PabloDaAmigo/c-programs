#include <stdio.h>

int main(void) {
    int day = 2;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n"); // Runs this
            break;               // Exits switch
        case 3:
            printf("Wednesday\n");
            break;
    }
    return 0;
}
