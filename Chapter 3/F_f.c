#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,area;
    printf("Enter (x1,y1):");
    scanf("%f %f",&x1,&y1);
    printf("Enter (x2,y2):");
    scanf("%f %f",&x2,&y2);
    printf("Enter (x3,y3):");
    scanf("%f %f",&x3,&y3);
    area=x1*(y2-y3)+x2*(y3-y2)+x3*(y1-y2);
    if (area==0)// we can aslo have if(area<0.00001&&area>-0.00001)
    {
        printf("Collinear: YES");
    }
    else
        printf("Collinear:  NO");
    return 0;
}