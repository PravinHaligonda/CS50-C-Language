#include <stdio.h>
#include <cs50.h>
#include <string.h>

int num(int n1, int n2);

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
    int n1 = 12;
    int n2 = 13;
    printf("Numbers: %i\n", num(n1, n2));
}

// For numbers
int num(int n1, int n2)
{
    return n1 + n2;
}