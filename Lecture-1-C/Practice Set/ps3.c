#define _DEFAULT_SOURCE
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num = get_int("Guess a number between 1 to 100: ");
    printf("%i\n", num);
    float rand = random();
    printf("Random: %f\n", rand);
}
