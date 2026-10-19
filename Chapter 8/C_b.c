// #include<stdio.h>
// int next_prime(int);
// int main()
// {
//     int num, prime=2, temp;
//     printf("Enter a positive number:");
//     scanf("%d",&num);
//     temp=num;
//     while(prime<=num)
//     {
//         if ((temp%prime)==0)
//         {
//             printf("%d, ",prime);
//             temp/=prime;
//         }
//         else
//         prime=next_prime(prime);
//     }
//     return 0;  
// }
// int next_prime(int prime)
// {
//     int i,num;
//     num=prime;
//     for ( num; 1; num++)
//     {
//         for ( i = 2; i < num; i++)
//         {
//             if (num%i==0)
//                 break;
//         }
//         if (num==i)
//         {
//             return num;
//         }
//     }
// }
#include<stdio.h>
int next_prime(int);

int main()
{
    int num, prime = 2, temp;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    temp = num;

    printf("Prime factors: ");
    while (prime<=num)
    {
        if ((temp % prime) == 0)
        {
            printf("%d, ", prime);
            temp /= prime;
        }
        else
            prime = next_prime(prime);
    }
    printf("\n");
    return 0;
}

int next_prime(int prime)
{
    int i, num;
    num = prime + 1;          // fixed: search starts AFTER current prime
    for ( ; 1; num++)
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
                break;
        }
        if (num == i)
            return num;
    }
}