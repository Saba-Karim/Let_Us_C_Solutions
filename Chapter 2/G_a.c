#include<stdio.h>
int main()
{
    int num,d1,d2,d3,d4,d5,sum;
    printf("Enter the 5 digit number:");
    scanf("%d",&num);
    d5=num%10;
    num=num/10;
    d4=num%10;
    num=num/10;
    d3=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d1=num%10;
    num=num/10;
    sum=d1+d2+d3+d4+d5;
    printf("The sum of the digits of the provided number is: %d",sum);
    return 0;

}