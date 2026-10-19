#include<stdio.h>
#include<math.h>
int main()
{
    float l1,l2,g1,g2,d;
    printf("Enter the latitudes l1 and l2 (in degrees):");
    scanf ("%f %f",&l1,&l2);
    l1=3.14/180*l1;
    l2=3.14/180*l2;
    printf("Enter the longitudes g1 and g2 (in degrees):");
    scanf ("%f %f",&g1,&g2);
    g1=3.14/180*g1;//conversion to radians
    g2=3.14/180*g2;//conversion to radians
    d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("The distance between the points is: %f nautical miles",d);
    return 0;

}
