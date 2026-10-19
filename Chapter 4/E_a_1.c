// #include<stdio.h>
// int main()
// {
//     int temp;
//     char ch;
//     printf("Enter the alphabet:"); scanf("%c",&ch);
//     if ((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
//     {
//         temp=(ch>=65&&ch<=90?1:0);
//         if (temp)
//         {
//             printf("Uppercase");
//         }
//         else
//             printf("lowercase");
//     }
//     else
//         printf("Please enter a alphabet.");
//     return 0;

// }
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: "); 
    scanf("%c", &ch);

    (ch >= 'a' && ch <= 'z')
        ? printf("It is a lowercase alphabet\n")
        : printf("It is NOT a lowercase alphabet\n");

    return 0;
}