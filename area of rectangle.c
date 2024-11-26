#include<stdio.h>
int main()
{
  float length,width,area;
  printf("enter the length and width:");
  scanf("%f%f",&length,&width);
  area=length*width;
  
  printf("area of rectangle:%.2f\n",area);
  return 0
}
