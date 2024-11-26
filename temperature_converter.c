#include <stdio.h>
{
  float temp, converted;
  int choice;
  printf("chooose the conversion:\n");
  printf("1. celsius to ferheneit\n");
  printf("2. ferheneit to celsius\n");
  printf("enter your choice:");
  scanf("%d", &choice);
  printf("enter the temperature:");
  scanf("%f",&temp);
  
  if (choice == 1) {
        converted = (temp * 9 / 5) + 32;
     printf("temperature in ferheniet is: %.2f\n",converted);
      } else if (choice == 2) {
        converted = (temp - 32) * 5 / 9; 
    printf("temperature in celsius is: %.2f\n",converted);
      } else {
        printf("Invalid choice.\n");
        return 1;
      }

      printf("Converted temperature: %.2f\n", converted);
      return 0; 
    
}
