#include<stdio.h>
int main()
{
    float cp,sp,profit,loss;
    printf("Enter the Cost price (in Rs.):");
    scanf("%f",&cp);
    printf("Enter the selling price (in Rs.):");
    scanf("%f",&sp);
    if (cp<=sp)
    {
        profit=sp-cp;
        if (profit==0)
        {
            printf("The seller made no profit nor incurred any loss");
        }
        else
        printf("The seller made a profit of:  Rs.%f",profit);
    }
    else
    {
        loss=cp-sp;
        printf("The seller incurred a loss of:  Rs.%f",loss);
    }
    return 0;
    
}