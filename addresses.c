#include <stdio.h>

void point();
void starchar(void);

int main(void) {
    int n = 50;
    int *p = &n;
    printf("%p\n", &n);
    printf("%i\n", *p);
    printf("%p\n", &p);
    point();
    starchar();
}

// & is address of
// * is dereference operator (like taken address and go to it.)

void point() {
    int s = 3;
    int * p = &s; // Doesn't matter where you put the * (int*, int *, int *n)
    // If you are creating a pointer you have to give the address of that pointer.
    // pointers tends to use 8 byte memory space.
    // normal int takes 4 bytes of memory.

    printf("%i\n", *p);
    printf("%p\n", &p);
}

void starchar(void) {
    char *name = "HI!";
    printf("Name %s\n", name);
    printf("%p\n", &name);
    printf("%p\n", &name[0]);
    printf("%p\n", &name[1]);
    printf("%p\n", &name[2]);
    printf("%p\n", &name[3]);
}
