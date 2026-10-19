// sqt s(s-a)(s-b)(s-c) where s=(a+b+c)/2
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter the 1st side:");
    scanf("%f", &a);
    printf("Enter the 2nd side:");
    scanf("%f",&b);
    printf("Enter the 3rd side:");
    scanf("%f",&c);
    s=(a+b+c)/2;
    area=sqrt((s*(s-a)*(s-b)*(s-c)));
    printf("Area of the triangle= %f sq units", area);
    return 0;
}
