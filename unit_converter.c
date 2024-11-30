#include <stdio.h>
int main() {
float meters, kilometers, grams, kilograms;
printf("Enter distance in meters: ");
scanf("%f", &meters);
kilometers = meters / 1000.0;
printf("Enter weight in grams: ");
scanf("%f", &grams);
kilograms = grams / 1000.0;
printf("%.2f meters = %.2f kilometers\n", meters, kilometers);
printf("%.2f grams = %.2f kilograms\n", grams, kilograms);
return 0;
}

