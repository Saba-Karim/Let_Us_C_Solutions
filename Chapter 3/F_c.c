#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("Enter the three angles of a triangle (in degrees):");
    scanf("%d %d %d",&a1,&a2,&a3);
    if (a1+a2+a3==180)
    {
        printf("Triangle is valid.");
    }
    else
        printf("Triangle is invalid");

    return 0;

}