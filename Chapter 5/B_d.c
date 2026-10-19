#include<stdio.h>
int main()
{
    int neg=0,pos=0,zeros=0,num,nonum=1,total;
    
    while (nonum)
    {
        printf("How many numbers you want to enter? : "); scanf("%d",&nonum);
        if (nonum<0)
        {
            printf("Negative amount of number kaise likhega bhauu!!\nEnter a NON negative value, Please.\n");
            nonum=1;
        }
        else if (nonum==0)
        {
            printf("Kuch to likh leta aalsii, faltu me mehnat kara diya.");
        }
        else
        {
            int i=1;
            while (i<=nonum)
            {
                printf("%d. Enter the number:",i); scanf("%d",&num);
                if (num>0)
                {
                    pos++;
                }
                else if (num==0)
                {
                    zeros++;
                }
                else
                    neg++;
                i++;
            }
            nonum=0;
            printf("\n\nTotal negative numbers=%d\n",neg);
            printf("Total positive numbers=%d\n",pos);
            printf("           Total zeros=%d\n",zeros);
            total=pos+neg+zeros;
            printf(" Total Numbers Entered=%d\n",total);
        }
    }
    return 0;
}