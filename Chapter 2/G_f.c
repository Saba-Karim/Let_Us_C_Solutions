#include<stdio.h>
int main()
{
    int c,d,temp;
    printf("Enter C:");
    scanf("%d",&c);
    printf("Enter D:");
    scanf("%d",&d);
    temp=c;
    c=d;
    d=temp;
    printf("C:%d\n",c);
    printf("D:%d",d);
    return 0;

}