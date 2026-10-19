#include<stdio.h>
int main()
{
    int population=100000,year;
    printf("Original population: %d\n",population);
    for ( year = 1; year <= 10; year++)
    {
        // population after one year
        population=population+(population/10);
        printf("Population after %d year: %d\n",year,population);
    }
    return 0;
    
}