#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter the sides of the triangle:"); scanf("%d%d%d",&s1,&s2,&s3);
    if (s1+s2>s3&&s2+s3>s1&&s1+s3>s2)
    {
        if(s1==s2&&s2==s3&&s1==s3)
        {
            printf("Equilateral Triangle\n");
        }
        else if ((s1==s2&&s1!=s3)||(s1==s3&&s1!=s2)||(s2==s3&&s2!=s1))
        {
            printf("Isosceles Triangle\n");
        }
        else if (s1!=s2&&s2!=s3&&s1!=s3)
        {
            printf("Scalene Triangle\n");
        }
        if (s1*s1+s2*s2==s3*s3||s2*s2+s3*s3==s1*s1||s1*s1+s3*s3==s2*s2)
        {
            printf("Right Angled Triangle");
        }
        else
            printf("NOT a Right Angled Triangle");
    }
    else
        printf("Invalid Triangle");
    return 0; 
}