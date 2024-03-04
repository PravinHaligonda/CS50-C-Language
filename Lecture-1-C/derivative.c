#include <stdio.h>
#include <cs50.h>

float f(float x);

int main(void)
{
    // (f(x + h) - f(x)) / h
    float h = 0.0001;
    float x = 3.0;

    float func = (f(x + h) - f(x)) / h;
    printf("d/dx of 3*x**2 - 4*x + 5: %f\n", func);
    printf("where x is %f\n", x);
    printf("And h is %f\n", h);

}

float f(float x)
{
    return 3 * (x * x) - (4 * x) + 5;
}

