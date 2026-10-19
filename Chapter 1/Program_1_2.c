#include <stdio.h>
int main()

{
    float km,cm,m,ft,in;
    printf("Enter the distance in km \n");
    scanf("%f", &km);
    cm=km*100000;
    m=km*1000;
    ft=km*3280.84;
    in=km*39370.1;
    printf("The distance in cm is %f\n", cm);
    printf("The distance in m is %f\n", m);
    printf("The distance in ft is %f\n", ft);
    printf("The distance in in is %f\n", in);
    return 0;
}