#include <cs50.h>
#include <stdio.h>

int main(void) {
    int num = get_int("Guess a number between 1 to 100: ");
    printf("%i\n", num);
}
