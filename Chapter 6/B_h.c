#include<stdio.h>
int main()
{
    int hour;
    for ( hour = 0; hour <= 23; hour++)
    {
        if (hour==0)
        {
            printf("12 Midnight\n");
        }
        else if (hour==12)
        {
            printf("12 Noon\n");
        }
        else if (hour<12)
        {
            printf("%i AM\n",hour);
        }
        else
        {
            printf("%i PM\n",hour-12);
        }
    }
    return 0;
}