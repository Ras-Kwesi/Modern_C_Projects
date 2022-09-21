#include <stdio.h>

int main(void) {
  int height, length, width, volume, weight;
  height = 13;
  length = 12;
  width = 8;
  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Dimensions H: %d, L: %d, W: %d \n",height,length,width);
  printf("Volume: %d \n", volume);
  printf("Weight: %d \n", weight);

  return 0;
}
