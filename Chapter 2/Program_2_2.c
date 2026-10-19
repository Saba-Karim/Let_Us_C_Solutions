#include <stdio.h>
int main()
{
    int n,d1,d2,d3,d4,d5;

    printf("Enter a 5 digit number:");
    scanf("%d",&n);
    //d1 is the first digit of the number and d5 is the last digit of the number
    d5=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    printf("The reversed number is: %d%d%d%d%d\n",d5,d4,d3,d2,d1);
    return 0;

}
