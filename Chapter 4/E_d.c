#include<stdio.h>
#include<math.h>
int main()
{
    float angle, result;
    printf("Enter the angle (in degrees):"); scanf("%d",&angle);
    angle=angle*3.14/180;
    result=sin(angle)*sin(angle)+cos(angle)*cos(angle);
    (result>=0.9999&&result<=1.0001)
        ?printf("Sum of squares of sin and cosine of this angle is equal to 1")
        :printf("Sum of squares of sin and cosine of this angle is NOT equal to 1");
    return 0;
}