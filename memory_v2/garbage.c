#include <stdio.h>
#include <stdlib.h>

int garbage(void);

int main(void)
{
    int x[1024];

    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", x[i]);
    }
    garbage();
}

// Solution:

int garbage(void)
{
    int *x;
    int *y;

    x = malloc(sizeof(int));
    *x = 42;
    // int *y = 13;

    x = y;

    *y = 13;

    printf("X: %i\n", x);
    printf("y: %i\n", y);
}