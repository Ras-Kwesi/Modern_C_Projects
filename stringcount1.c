#include <stdio.h>

int main(void){
  // Declare variables
  char ch;
  int len = 0;

  printf(" Enter a sentence, mark the end with \" # \": ");
  ch = getchar();
  while(ch != '#'){
    len++;
    ch = getchar();
  }
  printf("Your sentence was %d characters long!", len);

  return 0;
}
