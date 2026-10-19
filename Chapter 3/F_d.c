#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if (a<0)
    {
        printf("%d",-a);
    }
    else
        printf("%d",a);
    return 0;
    
}