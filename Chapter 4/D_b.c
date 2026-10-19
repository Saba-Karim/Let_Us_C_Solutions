#include<stdio.h>
int main()
{
    int r,g,b;
    float c,m,y,k,w;
    printf("Enter the RGB values:"); scanf("%d%d%d",&r,&g,&b);
    if (r==0&&g==0&&b==0)
    {
        c=m=y=0; k=1;
        printf("C:%f\nM:%f\nY:%f\nK:%f\n",c,m,y,k);
    }
    else if (r<=255&&r>=0&&g<=255&&g>=0&&b<=255&&b>=0)
    {
        w = r/255.0;
        if (g/255.0 > w) w = g/255.0;
        if (b/255.0 > w) w = b/255.0;

        c=(w-r/255.0)/w;
        m=(w-g/255.0)/w;
        y=(w-b/255.0)/w;
        k=1-w;
        printf("C:%f\nM:%f\nY:%f\nK:%f\n",c,m,y,k);
    }
    else
    printf("Invalid RGB values! must be between 0 and 255.");
    return 0;
}