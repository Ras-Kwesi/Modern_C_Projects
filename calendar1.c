#include <stdio.h>
#include <stdbool.h>

int main(void){
  int day,date,days,start_date,first_week_start;

  printf("\nEnter number of days in the month:");
  scanf("%d", &days);
  printf("Enter the day the calendar starts (Sun = 1, Sat = 7):");
  scanf("%d", &start_date);
  printf("\n");
  
  while(start_date > 1){
        printf("  ");
        start_date = start_date - 1;
	date = date + 1;
        };
  date = 0;

  for(day = 1; days >= day; ++day, ++date ){
    int day_of_the_week;
    // While the day of the week is less tha 7, number are printed
    // Once date 7 is met, prints on a new line and date is reset 
     printf("%d  ", day);
    if(date == 7){
       // if(date % 7 == 0){
      printf("Newline \n");
      date = 0;
     };
  };
};
