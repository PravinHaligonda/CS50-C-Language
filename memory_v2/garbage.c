#include <stdio.h>

int main(void)
{
    int x[1024];

    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", x[i]);
    }
}

// Solution:

int garbage(void)