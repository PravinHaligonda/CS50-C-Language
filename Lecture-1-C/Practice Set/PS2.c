#include <stdio.h>
#include <cs50.h>

int main(void) {

    printf("Fahrenheit to Celcius.\n");

    float F = get_int("F:");
    float out = (F - 32) * 5 / 9;

    printf("%f Celcius\n", out);
}
