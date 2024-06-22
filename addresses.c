#include <stdio.h>

void point();

int main(void) {
    int n = 50;
    int *p = &n;
    printf("%p\n", &n);
    printf("%i\n", *p);
    printf("%p\n", &p);
    point();
}

// & is address of
// * is dereference operator (like taken address and go to it.)

void point() {
    int s = 3;
    int * p = &s;

    printf("%i\n", *p);
    printf("%p\n", &p)
}
