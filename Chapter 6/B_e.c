#include<stdio.h>
int main()
{
    int a,b,c;
    for ( a = 1; a <= 30; a++)
    {
        for ( b = 1; b <= 30; b++)
        {
            for ( c = 1; c <= 30; c++)
            {
                if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
                {
                    printf("(%d,%d,%d)\n",a,b,c);
                }
                
            }
            
        }
        
    }
    
    return 0;
}
//This is from claude
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int a, b, c;

//     for (a = 1; a <= 30; a++)
//     {
//         for (b = a; b <= 30; b++)   // b starts from a, not 1 — kills half the duplicates
//         {
//             c = sqrt(a*a + b*b);
//             if (c <= 30 && a*a + b*b == c*c)
//                 printf("(%d, %d, %d)\n", a, b, c);
//         }
//     }
//     return 0;
// }