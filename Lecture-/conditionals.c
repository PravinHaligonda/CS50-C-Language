#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 5;
    if (x > y) {
        printf("X is greater than y.\n");
    }
    else if (x < y)
    {
        printf("X is smaller that y.\n");
    }
    else if (x == y)
    {
        printf("X is equal to y.\n");
    }
}