#include <stdio.h>

int main(void) {
  int height, weight, width, volume, length;

  printf("Enter length: ");
  scanf("%d", &length);
  printf("Enter width: ");
  scanf("%d", &width);
  printf("Enter height: ");
  scanf("%d", &height);

  volume = length * width * height;
  weight = (volume + 165) / 166;

  printf(" The Dimensions are: Length: %d \n , Width: %d \n , Height: %d \n .", height, width, height);
  printf (" Volume = %d \n", volume);
  printf(" Weight = %d \n" , weight);
}
