#include<stdio.h>
int main ()
{
    int a,b,c,greatest;
    printf("Enter the three numbers:"); scanf("%d%d%d",&a,&b,&c);
    greatest=(a>b&&a>c)?a:((b>c)?b:c);
    printf("Greatest= %d",greatest);
    return 0;
}