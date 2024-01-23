#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *n = malloc(3 * sizeof(int));

    n[0] = 72;
    n[1] = 73;
    n[2] = 33;
    free(n);
}