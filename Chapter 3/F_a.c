#include<stdio.h>
#include<math.h>
int main()
{
    int num,d1,d2,d3,d4,d5,revnum,temp;
    printf("Enter a 5 digit number:");
    scanf("%d",&num);
    temp=num;
    d5=num%10;
    num=num/10;
    d4=num%10;
    num=num/10;
    d3=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d1=num%10;
    revnum=d5*10000+d4*1000+d3*100+d2*10+d1;
    printf("Reversed Number:%d\n",revnum);
    if (temp==revnum)
    {
        printf("The original and reversed numbers are equal.");
    }
    else
        printf("The original and reversed numbers are not equal.");
    return 0;
    
}