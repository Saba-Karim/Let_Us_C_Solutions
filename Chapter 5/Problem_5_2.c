// #include<stdio.h>
// int main()
// {
//     int num, i, fact=1;
//     printf("Enter the number:"); scanf("%d",&num);
//     i=num;
//     while (i>=1)
//     {
//         fact=fact*i;
//         i--;
//     }
//     printf("The factorial of %d is %d",num,fact);
//     return 0;

// }
#include<stdio.h>
int main()
{
    int num, i, fact;
    printf("Enter the number:"); scanf("%d",&num);
    fact=i=1;
    while (i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("The factorial of %d is %d",num,fact);
    return 0;

}