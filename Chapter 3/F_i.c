#include <stdio.h>
int main()
{
    int year, days, day;
 /* Days since year 2001 (which we know is Monday) */
    int days_2001 = 2000*365 + 2000/4 - 2000/100 + 2000/400; 
    // this is the day-count baseline for year 2000 (i.e., before Jan 1 2001)   
    printf("Enter the year: ");
    scanf("%d", &year);
    year = year - 1;
    days = year*365 + year/4 - year/100 + year/400;
    day = (days - days_2001) % 7;
    if (day < 0) day += 7;   // handle years BEFORE 2001 too
    
    if (day == 0)
        printf("Monday");
    else if (day == 1)
        printf("Tuesday");
    else if (day == 2)
        printf("Wednesday");
    else if (day == 3)
        printf("Thursday");
    else if (day == 4)
        printf("Friday");
    else if (day == 5)
        printf("Saturday");
    else if (day == 6)
        printf("Sunday");
    
    return 0;
}