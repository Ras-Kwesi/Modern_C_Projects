# include <stdio.h>
# include <stdbool.h>

int main(void){
  float num,largestnum;

  printf("This program will sort the largest number in a set of number you provide. \n" );

  do{
    printf("Enter a number: ");
    scanf("%f", &num);
    largestnum = num > largestnum ? num : largestnum;
    /*if (num > largestnum){
      largestnum = num;
      }*/ 
  }
  while( num > 0);

  printf("The largest keyed in number is: %f", largestnum);
}
