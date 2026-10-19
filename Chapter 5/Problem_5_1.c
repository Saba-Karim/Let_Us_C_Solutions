#include <stdio.h>
int main()
{
    int rate=120, hours, i=1, otpay;
    while (i<=10)
    {
        printf("%d. Enter the number of hours wroked:",i); scanf("%d",&hours);

        if (hours>40)
        {
            otpay=rate*(hours-40);
            printf("Overtime Pay: %d\n",otpay);
        }
        else
            printf("No Overtime pay\n");
        i++;
    
    }
    return 0;
}