#include<stdio.h>
int main()
{
    int num,i;
    printf("All prime numbers from 1 to 300 are:");
    for ( num = 1; num < 300; num++)
    {
        for ( i = 2; i < num; i++)
        {
            if (num%i==0)
                break;
        }
        if (num==i)
        {
            printf("%d \t", num);
        }
    }
    return 0;
}