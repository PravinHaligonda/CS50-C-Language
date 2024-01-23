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

    x = 13;
    y = 14;

    printf("X: %i\n", &x);
    printf("y: %i\n", &y);
}