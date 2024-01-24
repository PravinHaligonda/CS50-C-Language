#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
    printf("For Compare Strings.\n");
    char *a = get_string("A: ");
    char *b = get_string("B: ");

    if (strcmp(a, b) == 0)
    {
        printf("Same.\n");
    }
    else
    {
        printf("Different.\n");
    }

}
