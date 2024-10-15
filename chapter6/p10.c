#include <stdio.h>

int main(void)
{
    int day, month, year, new_day, new_month, new_year;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%02d", &month, &day, &year);

    if(month == 0 && day == 0 && year == 0)
    {
        printf("Exiting program...\n");
        return 0;
    }

    new_day = day;
    new_month = month;
    new_year = year;

    while (year > 0 && month > 0 && day > 0)
    {

        if(year < new_year) {
            new_day = day;
            new_month = month;
            new_year = year;
        } else if(year == new_year) {
            if(month < new_month) {
                new_day = day;
                new_month = month;
                new_year = year;
            } else if(month == new_month) {
                if(day < new_day) {
                    new_day = day;
                    new_month = month;
                    new_year = year;
                }
            }
        }

        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%02d", &month, &day, &year);
    }

    printf("The earliest date entered is: %d/%d/%02d\n", new_month, new_day, new_year);

    return 0;
} 