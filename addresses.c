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
    int * p = &s; // Doesn't matter where you put the * (int*, int *, int *n)
    // If you are creating a pointer you have to give the address of that pointer.

    printf("%i\n", *p);
    printf("%p\n", &p);
}
