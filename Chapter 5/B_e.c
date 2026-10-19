#include<stdio.h>
int main()
{
    int num, rem, temp, octal=0, position=1;
    printf("Enter the number:"); scanf("%d",&num);
    if (num<0)
    {
        printf("Negative ka octal nhi hota bhai!!\n");
    }
    else
    {
        temp=num;
        while (temp>0)
        {
            rem=temp%8;
            temp=temp/8;
            octal=octal+(position*rem);
            position=position*10;
        }
        printf("Octal of %d : %d",num,octal);
    }
    return 0;
    
}