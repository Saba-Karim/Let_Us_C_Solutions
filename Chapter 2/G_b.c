#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,phi;
    printf("Enter the x coordinate:");
    scanf("%f",&x);
    printf("Enter the y coordinate:");
    scanf("%f",&y);
    r=sqrt(x*x+y*y);
    phi=atan(y/x);    //phi is in radian
    phi=180/3.14*phi; //phi is now in degree
    printf("The polar co-ordinates is (%f,%f)",r,phi);
    return 0;

} 