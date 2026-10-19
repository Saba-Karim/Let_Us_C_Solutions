#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the point:"); scanf("%d %d",&x,&y);
    if (x==0&&y==0)
    {
        printf("Origin");
    }
    if (x==0&&y!=0)
    {
        printf("Y-axis");
    }
    if (x!=0&&y==0)
    {
        printf("X-axis");
    }
    if (x!=0&&y!=0)
    {
        printf("Some Quadrant");
    }
    
    return 0;
    
}