#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Character:"); scanf("%c",&ch);

    ((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
        ?printf("Special symbol")
        :printf("NOT a special symbol");
    return 0;
}
// (!(ch >= 'a' && ch <= 'z') &&
//  !(ch >= 'A' && ch <= 'Z') &&
//  !(ch >= '0' && ch <= '9'))
//     ? printf("Special symbol")
//     : printf("NOT a special symbol");