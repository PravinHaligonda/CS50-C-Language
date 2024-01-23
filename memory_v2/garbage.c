#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int p = 13;
    int* a = &p;

    printf("A: %d\n", *a);
}