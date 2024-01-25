#include <stdio.h>
#include <cs50.h>

float f(float x);

int main(void)
{
    float func = f(3);
    printf("Data=(%f)\n", func);
}

float f(float x)
{
    return 3 * (x * x) - (4 * x) + 5;
}