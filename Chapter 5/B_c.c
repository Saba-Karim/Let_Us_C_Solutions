#include<stdio.h>
int main()
{
    int Computer_pick,User_pick,matchsticks=21;
    printf("There are total 21 matchstick, the person who picks the last one loses, Good luck!!\n");
    while (matchsticks>=1)
    {
        printf("Matchstick(s) Left:%d\n",matchsticks);
        if (matchsticks==1)
        {
            printf("Ha Ha YOU LOSE!!! tay tay phisss :)\n");
            printf("**THE END**");
            matchsticks=0;
        }
        else
        {
            printf("Pick number of matchsticks (1-4):"); scanf("%d",&User_pick);
            if (User_pick>4||User_pick<1)
            {
                printf("1 to 4 ONLY, Masti nai mittar!\n");
            }
            else
            {
                Computer_pick=5-User_pick;
                printf("Computer picks: %d\n",Computer_pick);
                matchsticks=matchsticks-5;
            }
        }
        
    }
    return 0;
    
}