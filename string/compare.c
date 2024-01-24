#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char *a = get_string("A: ");
    char *b = get_string("B: ");

    if (strcmp(a, b) == 0)
    {
        printf("Same.\n:");
    }
    else
    {
        printf("Different.\n");
    }
}

// For numbers
int num(int a, int b)
{
    if (a == b)
    {
        printf("Same.\n");
    }
    else
    {
        printf("Different.");
    }
}