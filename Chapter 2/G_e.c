#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("Enter the angle in radian:");
    scanf("%f",&a);
    printf("sin a=%f\ncos a=%f\ntan a=%f",sin(a),cos(a),tan(a));
    return 0;

}