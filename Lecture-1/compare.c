#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x > y)
    {
        printf("X is greater than y.\n");
    }
    else if (x < y)
    {
        printf("X is less than y.\n");
    }
    else
    {
        printf("X is equal to y.\n");
    }
}