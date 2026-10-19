#include<stdio.h>
void leap_year_checker(int);
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    leap_year_checker(year);
}
void leap_year_checker(int year)
{
    if (year%4==0)
    {
        if (year%100==0)
        {
            if (year%400==0)
            {
                printf("Leap Year.\n");
            }
            else
                printf("Not A Leap Year.\n");
        }
        else
            printf("Leap Year.\n");
    }
    else
        printf("Not A Leap Year.\n");
    
}