#include <stdio.h>

int main() {
    int age = 20;
    char gender = 'M'; 

    if (age >= 18) {
        printf("You are an adult.\n");

        if (gender == 'M') {
            printf("You are a male adult.\n");
        } else if (gender == 'F') {
            printf("You are a female adult.\n");
        } else {
            printf("Gender not specified.\n");
        }
    } else {
        printf("You are not yet an adult.\n");
    }

    return 0;
}
