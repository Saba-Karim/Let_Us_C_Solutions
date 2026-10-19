#include<stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf("Age of Ram:");
    scanf("%d",&ram);
    printf("Age of Shyam:");
    scanf("%d",&shyam);
    printf("Age of Ajay:");
    scanf("%d",&ajay);
    if (ram<shyam)
    {
        if (ram<ajay)
        {
            printf("Ram is youngest.");
        }
        else
            printf("Ajay is the youngest.");
    }
    else
    {
        if (shyam<ajay)
        {
            printf("Shyam is the youngest.");
        }
        else
            printf("Ajay is the youngest.");   
    }
    return 0;
}