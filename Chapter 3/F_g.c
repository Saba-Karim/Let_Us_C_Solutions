#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,a,b,s;
    printf("Enter the center of the circle:"); scanf("%f %f",&x,&y);
    printf("Enter the radius of the circle:"); scanf("%f",&r);
    printf("Enter the point (x,y) for checking:"); scanf("%f %f",&a,&b);
    s=pow((x-a),2)+pow((y-b),2)-pow(r,2);
    //better to use dist formula of point a,b from x,y and then compare the dist with r. you wont have any trouble of writing 0.00001 this many times
    if (s<-0.00001)
    {
        printf("The point lies INSIDE the circle.");
    }
    if (s<0.00001||s>-0.00001)
    {
        printf("The point lies ON the circle.");
    }
    if (s>0.00001)
    {
        printf("The point lies OUTSIDE the circle.");
    }
    return 0;
}