#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if (a%2!=0)
        printf("Odd");
    else
        printf("Even");

    return 0;
    
}