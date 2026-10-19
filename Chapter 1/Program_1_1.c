#include <stdio.h>
int main()
{
    int bp, da, hra, grspay;
    printf("Enter the basic pay \n");
    scanf("%d", &bp);
    da=0.4*bp;
    hra=0.2*bp;
    grspay=bp+da+hra;
    printf("The basic pay is %d\n", bp);
    printf("The DA is %d\n", da);
    printf("The HRA is %d\n", hra);
    printf("The gross salary is %d\n", grspay);
    return 0;
}