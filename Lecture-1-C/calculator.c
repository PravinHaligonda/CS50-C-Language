#include <cs50.h>
#include <stdio.h>

int main(void) {
    int x = get_int("What's x:");
    int y = get_int("What's y:");

    float z = (float) x / (float) y;
    printf("x / y: %.5f\n", z);
}
