#include <stdio.h>

int main(void)
{
    int a = 50;

    int *p = &a;

    printf("A: %i\n", *p);
}