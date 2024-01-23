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
    int n = 13;
    int *x = &n;

    printf("X: %i\n", x);
}