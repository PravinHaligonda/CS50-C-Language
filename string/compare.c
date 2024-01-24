#include <stdio.h>
#include <cs50.h>
#include <string.h>

int num(int n1, int n2);

int main(void)
{
    printf("For Compare Strings.");
    char *a = get_string("A: ");
    char *b = get_string("B: ");

    printf("For Compare Numbers");
    int n1 = get_int("N1: ");
    int n2 = get_int("N2: ");

    if (strcmp(a, b) == 0)
    {
        printf("Same.\n:");
    }
    else
    {
        printf("Different.\n");
    }

    printf("Numbers: %i\n", num(n1, n2));
}

// For numbers
int num(int n1, int n2)
{
    printf("N1 and N2: %i %i \n", n1, n2);
}