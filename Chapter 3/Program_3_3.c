#include<stdio.h>
#include<math.h>
int main()
{
    int yr;
    printf("Enter the year:");
    scanf("%d",&yr);
    if (yr%4==0)
    {
        if (yr%100==0)
        {
            if (yr%400==0)
            {
                printf("leap year");
            }
            else
                printf("Not a leap year");
        }
        else
            printf("Leap year");
        
    }
    else
        printf("Not a leap year");
    return 0;
    
    
}