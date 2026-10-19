// #include<stdio.h>
// int main()
// {
//     int a,b,c,d,num1,num2;
//     for ( a = 0; a <= 50; a++)
//     {
//         for ( b = 0; b <= 50; b++)
//         {
//             num1=a*a*a+b*b*b;
//             for ( c = 0; c <= 50; c++)
//             {
//                 for ( d = 0; d <= 50; d++)
//                 {
//                     if (a+b!=c+d&&a*b!=c*d)
//                     {
//                         num2=c*c*c+d*d*d;
//                         if (num1==num2)
//                         {
//                             printf("%d\n",num1);
//                         }
                        
//                     }
                    
//                 }
                
//             }
            
//         }
        
//     }
//     return 0;
    
// }
#include <stdio.h>

int main()
{
    int n, i, j, count;
    int i1, j1, i2, j2;   // to store the two pairs found
    int limit;

    printf("Enter upper limit: ");
    scanf("%d", &limit);

    for (n = 2; n <= limit; n++)
    {
        count = 0;

        for (i = 1; i * i * i < n; i++)
        {
            for (j = i; j * j * j < n; j++)
            {
                if ((i * i * i) + (j * j * j) == n)
                {
                    count++;
                    if (count == 1)
                    {
                        i1 = i;
                        j1 = j;
                    }
                    else if (count == 2)
                    {
                        i2 = i;
                        j2 = j;
                    }
                }
            }
        }

        if (count >= 2)
        {
            printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", n, i1, j1, i2, j2);
        }
    }

    return 0;
}