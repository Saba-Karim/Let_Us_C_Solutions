#include <stdio.h>

int main() {
    int length = 1189;
    int breadth = 841;
    int temp;

    printf("Paper sizes:\n");
    for (int i = 0; i <= 9; i++) 
    {
        printf("A%d: %d mm x %d mm\n", i, length, breadth);
        
        // Calculate next size: 
        // The current length becomes the new breadth, 
        // and the current breadth becomes the new length divided by 2.
        temp = length;
        length = breadth;
        breadth = temp / 2;
    }

    return 0;
}

