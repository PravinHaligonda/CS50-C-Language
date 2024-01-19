#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What's X? ");
    int y = get_int("What's Y? ");

    if (x < y)
    {
        printf("X is less than y\n");
        return 0;
    }
    else if (x > y)
    {
        printf("X is greater than y\n");
        return 0;
    }
    else if (x == y)
    {
        printf("X is equal to y\n");
        return 0;
    }

}