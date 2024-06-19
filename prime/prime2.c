#include <stdio.h>
#include <cs50.h>

int main(void) {

    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (max <= min);

    for (int i = min; i <= max; i++)
    {
        if (i / 1 == i && i / i == 1)
        {
            printf("%i\n", i);
        }
        else
        {
            return false;
        }
    }
}
