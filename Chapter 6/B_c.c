#include<stdio.h>
#include<math.h>
int main()
{
    int q,i;
    float r,n,p,a;
    for (i = 1; i <= 10; i++)
    {
        printf("%d. Enter the value of p, r, n & q:",i);
        scanf("%f %f %f %d",&p,&r,&n,&q);
        a=p*pow(1+(r/(q*100)),n*q);
        printf("Final Amount (a): %f\n",a);
    }
    return 0;
    

}