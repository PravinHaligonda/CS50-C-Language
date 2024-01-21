#include <stdio.h>

int main(void)
{
    int n = 3;
    int *p = &n; // * is a pointer to store the address of variable n; and & is a address at which the variable to choose.
    printf("N: %p\n", p); // %p to place the pointer
}

/* It is like go to the address of n and tell me what is there. */