# include <stdio.h>
# include <stdbool.h>

int main(void){
  float num,largestnum;

  while(num > 0.0){
      printf("Enter a number: ");
      scanf(" %f ", &num);
      if (num > largestnum){
	largestnum = num;}
    };
    
  printf("Largest number is: %f", largestnum);
}
  
