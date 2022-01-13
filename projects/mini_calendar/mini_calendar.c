#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year) {
  return (year % 4 == 0 && (year % 100 || year % 400 == 0));
}

int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void add_days_to_date(int* mm, int* dd, int* yy, int days_left_to_add) {
  int days_left_in_month;

  while (days_left_to_add > 0) {
    days_left_in_month = days_in_month[*mm] - *dd;
    
    if (*mm == 2 && is_leap_year(*yy) == true) {
      days_left_in_month += 1;
    } 

    if (days_left_to_add > days_left_in_month) { // If more days left than can be added in a month.
      days_left_to_add -= days_left_in_month + 1; // Jump to the first day of the next month. 
      *dd = 1; // We are on the first day of the next month, but what is the next month?

      if (*mm == 12) { // If last month was December.
        *mm = 1; // Next month is January.
        *yy += 1; // We are in a new year so increase by 1.
      } else {
        *mm += 1; // If some other month, just increase by 1.
      }
    } else { // If all days can be added in this month.
      *dd = *dd + days_left_to_add; // Add the days.
      days_left_to_add = 0; // No more days to add.
    } 
  }
}

int main() {
  int mm, dd, yy, days_left_to_add;
  printf("Input a year between 1800 and 10000, in the format of 'mm dd yy'. After you do this, on the next line - enter the amount of days you'll like to skip forward: ");
  scanf("%d%d%d%d", &mm, &dd, &yy, &days_left_to_add);
  add_days_to_date(&mm, &dd, &yy, days_left_to_add);
  printf("%d/%d/%d\n", mm, dd, yy);
}