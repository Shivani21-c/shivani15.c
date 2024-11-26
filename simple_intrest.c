#include <stdio.h>

int main(void)
{
    float principal, rate, time, simpleInterest;

printf("Enter the Principal amount: ");

scanf("%f", &principal);

printf("Enter the Rate of Interest (in percentage): ");

scanf("%f", &rate);

printf("Enter the Time period (in years): ");

scanf("%f", &time);

simpleInterest = (principal * rate * time) / 100;

printf("The Simple Interest is: %.2f\n", simpleInterest);

    return 0;
}

