#include <stdio.h>

int main(void) {
  // Function to match the details in a isbn book number
  int gsi, gr_i, pub_c, i_no, c;
  
  printf("What is the isbn number of your book: \n Split each number with a dash");
  scanf("%d-%d-%d-%d-%d", &gsi, &gr_i, &pub_c, &i_no, &c);

  printf("Your isbn number is: %d-%d-%d-%d-%d\n", gsi, gr_i, pub_c, i_no, c);
  printf("GSI Prefix: %d \n", gsi);
  printf("Group Identifier: %d \n", gr_i);
  printf("Publisher Code: %d \n", pub_c);
  printf("Item Number: %d \n", i_no);
  printf("Check Digit: %d \n",c);

}
  
