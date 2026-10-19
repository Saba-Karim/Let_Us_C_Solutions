#include<stdio.h>
int main()
{
    float l,b,area,perimeter;
    printf("Enter the length of the rectangle:");
    scanf("%f",&l);
    printf("Enter the breadth of the rectangle:");
    scanf("%f",&b);
    area=l*b;
    perimeter=2*(l+b);
    if (area>=perimeter)
    {
        if (area==perimeter)
            printf("Area and perimeter are equal.");
        else
            printf("Area is greater than perimeter.");   
    }
    else
        printf("Area is not greater than perimeter.");
    return 0;
}