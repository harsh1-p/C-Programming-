/*### Date Validation

Input:

day
month
year

Determine whether the date is valid.

For example:

31/01/2026 → Valid
31/04/2026 → Invalid

You need to combine:

- `if` 
- `else-if` 
-  logical operators 
-  leap-year logic 

This is an **excellent conditional-***/

#include <stdio.h>

int main() {
    int day, month, year;
    int maxDays;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    // Check whether month is valid
    if (month < 1 || month > 12) {
        printf("Invalid date\n");
    }
    else {

        // Find maximum number of days in the month
        if (month == 2) {

            // Leap year
            if ((year % 400 == 0) ||
                (year % 4 == 0 && year % 100 != 0)) {
                maxDays = 29;
            }
            else {
                maxDays = 28;
            }

        }
        else if (month == 4 || month == 6 ||
                 month == 9 || month == 11) {
            maxDays = 30;
        }
        else {
            maxDays = 31;
        }

        // Check whether day is valid
        if (day >= 1 && day <= maxDays) {
            printf("Valid\n");
        }
        else {
            printf("Invalid\n");
        }
    }

    return 0;
}

