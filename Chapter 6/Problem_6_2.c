#include<stdio.h>
int main()
{
    float i=1,denominator=1,sum=0;
    for ( i = 1; i <= 7; i++)
    {
        denominator=denominator*i;
        sum=sum+(i/denominator);
    }
    printf("Sum of the first 7 terms of the series: %f",sum);
    return 0;

}