#include<stdio.h>
#include<math.h>
int main()
{
    float sum=0,x,a;
    int i;
    printf("Enter the value of x:");
    scanf("%f",&x);
    a=(x-1)/x;
    for ( i = 1; i <= 7; i++)
    {
        sum=sum+(pow(a,i)/i);
    }
    printf("Some of the first 7 terms of this series:%f",sum);
    return 0;
    
}