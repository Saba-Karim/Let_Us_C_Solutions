#include<stdio.h>
int main()
{
    int num=100,d1,d2,d3,temp;
    while (num<=500)
    {
        temp=num;
        d3=temp%10;
        temp=temp/10;
        d2=temp%10;
        temp=temp/10;
        d1=temp;
        if (num==(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3))
        {
            printf("%d\n",num);
        }
        num++;
    }
    return 0;

}