#include<stdio.h>
#include<math.h>
int main()
{
    int year;
    printf("Enter the year:"); scanf("%d",&year);
    if (year%4==0&&year%100!=0||year%400==0)
    {
        printf("Leap Year");
    }
    else
        printf("NOT a Leap Year");
    return 0;
}