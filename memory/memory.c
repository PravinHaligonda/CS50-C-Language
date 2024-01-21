#include <stdio.h>

int main(void)
{
    int n = 3;
    int *p = &n; // * is a pointer to store the address. & is the address of 
    printf("N: %p\n", p);
}