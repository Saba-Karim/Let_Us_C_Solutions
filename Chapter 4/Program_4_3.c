#include<stdio.h>
int main()
{
    int s1,s2,s3,sum,ls;
    printf("Enter three side:"); scanf("%d %d %d",&s1,&s2,&s3);

    if (s1 >= s2 && s1 >= s3)
    {
    ls = s1; sum = s2 + s3;
    } 
    else if (s2 >= s1 && s2 >= s3)
    {
    ls = s2; sum = s1 + s3;
    }
    else 
    {
    ls = s3; sum = s1 + s2;
    }
    if (sum>ls)
    {
        printf("Valid Triangle");
    }
    else
        printf("Invalid Triangle");

    return 0;
    
}   