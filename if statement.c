#include <stdio.h>

int main() {
    int number = 15;

    if (number < 0) {
        printf("The number is negative.\n");
    } else if (number == 0) {
        printf("The number is zero.\n");
    } else {
        printf("The number is positive.\n");
    }

    return 0;
}
