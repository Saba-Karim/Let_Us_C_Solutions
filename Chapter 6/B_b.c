#include<stdio.h>
int main()
{
    int y;
    float x;
    for (y = 1; y <=6; y++)
    {
        for (x = 5.5; x <= 12.5; x+=0.5)
        {
            printf("y=%d\tx=%.1f\ti=%.2f\n",y,x,2+(y+0.5*x));
        }
        
    }
    return 0;

}