#include <stdio.h>

int main(void) {
    int n = 50;
    int *p = &n;
    printf("%p\n", &n);
    printf("%i\n", *p);
    printf("%p\n", &p);
}

// & is address of
// * is dereference operator (like taken address and go to it.)
