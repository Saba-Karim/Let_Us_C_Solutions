#include<stdio.h>
int main()
{
    int class, sub_failed, grace=0;
    printf("Enter the class obtained by the student:");
    scanf("%d",&class);
    printf("Enter the number of subjects failed:");
    scanf("%d",&sub_failed);
    switch (class)
    {
    case 1:
        if(sub_failed>3)
            grace=0;
        else
            grace=sub_failed*5;
        break;
    case 2:
        if(sub_failed>2)
            grace=0;
        else
            grace=sub_failed*4;
        break;
    case 3:
        if(sub_failed>1)
            grace=0;
        else
            grace=5;
        break;
    default:
        printf("Invalid class entered\n");
        return 0;
    }
    printf("Grace Marks: %d",grace);
    return 0;
}