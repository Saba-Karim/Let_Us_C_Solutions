#include<stdio.h>
int main()
{
    float hardness, carbon, tensile;
    int i,j,k;
    printf("Enter the hardness, carbon content and tensile strength:"); scanf("%f%f%f",&hardness,&carbon,&tensile);
    //1.hardness>50
    //2.carbon<0.7
    //3.tensile>5600
    i=(hardness>50?1:0);
    j=(carbon<0.7?1:0);
    k=(tensile>5600?1:0);
    if (i&&j&&k)    // instead of i==1&&j==1&&k==1
    {
        printf("Grade: 10");
    }
    else if (i&&j&&!k)
    {
        printf("Grade: 9");
    }
    else if (!i&&j&&k)
    {
        printf("Grade: 8");
    }
    else if (i&&!j&&k)
    {
        printf("Grade: 7");
    }
    else if (i||j||k)
    {
        printf("Grade: 6");
    }
    else
    {
        printf("Grade: 5");
    }
    return 0;
    

}