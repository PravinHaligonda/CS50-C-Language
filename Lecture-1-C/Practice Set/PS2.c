#include <stdio.h>
#include <cs50.h>

// Fahrenheit to Celcius.
int main(void) {

    printf("Fahrenheit to Celcius.\n");

    float F = get_float("F:");
    float out = (F - 32) * 5 / 9;

    printf("%f Celcius\n", out);
}
