#include <stdio.h>
#include <stdbool.h>

int main(void){
  int a,b,c,d,x,y,z;

  printf("Gimme 4 digits and I'll tell you the largest one: /n");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  x = a > b? a : b;
  y = x > c? x : c;
  z = y > d? y : d;

  printf("***%d**** is the largest Number", z);
  return 0;
}
