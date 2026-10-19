#include<stdio.h>
#include<math.h>
int main()
{
    int yr;
    printf("Enter the year:"); scanf("%d",&yr);
    ((yr%4==0&&!(yr%100))||yr%400==0)
        ?printf("Leap year")
        :printf("NOT a leap year");
    return 0;

}