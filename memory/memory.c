#include <stdio.h>

int nv01(void);

int main(void)
{
    int n = 3;
    int *p = &n; // * is a pointer to store the address of variable n; and & is a address at which the variable to choose.
    printf("N: %p\n", p); // %p to place the pointer
    nv01();
}

/* It is like go to the address of n and tell me what is there. */


int nv01(vo)
{
    int n = 50;
    int *p = &n;
    printf("N: %i\n", *p);
}