#include <stdio.h>
#include <cs50.h>

float f(float x);

int main(void)
{
    // (f(x + h) - f(x)) / h
    float h = 0.0001;
    float x = 3.0;

    float func = (f(x + h) - f(x)) / h;
    printf("f(x + h)=%f\n", func);

}

float f(float x)
{
    return 3 * (x * x) - (4 * x) + 5;
}

