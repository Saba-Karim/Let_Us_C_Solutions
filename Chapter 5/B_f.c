#include<stdio.h>
int main()
{
    int num, smallest=0, largest=0, range, no_num, i=1;
    printf("How many numbers you want to enter? (minimum 2): "); scanf("%d",&no_num);
    if (no_num<=1)
    {
        printf("Invalid input.");
    }
    else
    {
        printf("%d. Enter the number:",i); scanf("%d",&num);
        largest=smallest=num;
        i++;
        while (i<=no_num)
        {
            printf("%d. Enter the number:",i); scanf("%d",&num);
            if (num>largest)
            {
                largest=num;
            }
            if (num<smallest)
            {
                smallest=num;
            }
            i++;
        }
        range=largest-smallest;
        printf("Range=%d",range);
    }
    return 0;
}