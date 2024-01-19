#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What's X? ");
    int y = get_int("What's Y? ");

    if (x < y)
    {
        printf("X is less than y\n");
    }
}