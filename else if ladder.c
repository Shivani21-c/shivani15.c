#include <stdio.h>

int main() {
    int score = 85; 

    if (score >= 90) {
        printf("Excellent! You got an A.\n");
    } else if (score >= 80) {
        printf("Great job! You got a B.\n");
    } else if (score >= 70) {
        printf("Good work! You got a C.\n");
    } else {
        printf("You need to study more.\n");
    }

    return 0;
}
