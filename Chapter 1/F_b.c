#include <stdio.h>
int main()

{
    float l,b,r,area,perimeter,circumference;
    printf("Enter the length and breadth of the rectangle \n");
    scanf("%f %f", &l, &b);
    area=l*b;
    perimeter=2*(l+b);
    printf("The area of the rectangle is %f\n", area);
    printf("The perimeter of the rectangle is %f\n", perimeter);
    printf("Enter the radius of the circle \n");
    scanf("%f", &r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("The area of the circle is %f\n", area);
    printf("The circumference of the circle is %f\n", circumference);
    return 0;

}