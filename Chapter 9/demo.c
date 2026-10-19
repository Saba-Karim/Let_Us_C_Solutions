#include<stdio.h>
int main()
{
    int i=2,*j;
    j=&i;
    printf("Address i= %u\n",&i);
    printf("Address i= %u\n",&i);
    printf("Address i= %u\n",j);
    printf("Value of i= %d\n",i);
    printf("Value of i= %d\n",*j);
    printf("Value of i= %d\n",*(&i));
    printf("Value of j= %d\n",j);
    return 0;

}