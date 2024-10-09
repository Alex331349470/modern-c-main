#include <stdio.h>

int main(void) {
  int hour, minute;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);

  if (hour < 8)
    printf("Closest departure time is 8:00 AM, arriving at 10:16 AM\n");
  else if (hour <= 9 && minute < 43)
    printf("Closest departure time is 9:43 AM, arriving at 11:52 AM\n");
  else if (hour <= 11 && minute < 19)
    printf("Closest departure time is 11:19 AM, arriving at 1:31 PM\n");
  else if (hour <= 12 && minute < 47)
    printf("Closest departure time is 12:47 PM, arriving at 3:00 PM\n");
  else if (hour < 14)
    printf("Closest departure time is 2:00 PM, arriving at 4:08 PM\n");
  else if (hour <= 15 && minute < 45)
    printf("Closest departure time is 3:45 PM, arriving at 5:55 PM\n");
  else if (hour < 19)
    printf("Closest departure time is 7:00 PM, arriving at 9:20 PM\n");
  else if (hour <= 21 && minute < 45)
    printf("Closest departure time is 9:45 PM, arriving at 11:58 PM\n");
  else
    printf("Closest departure time is 8:00 AM, arriving at 10:16 AM\n");

  return 0;
}
