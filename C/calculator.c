#include <stdio.h>
#include <cs50.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(void)
{
    int x = get_int("X: ");
    int y = get_int("Y: ");
    printf("['add' or '+']");
    printf("['sub' or '-']");
    printf("['mul' or '*']");
    printf("['div' or '/']");
    string op = get_string("Operation to perform: ");

    if (op == 'add' || op == '+')
    {
        int z = add(x, y);
        printf("Addition of %i and %i: %i\n", x, y, z);
    } else if (op == 'sub' || op == '-')
    {
        int z = sub(x, y);
        printf("Substraction of %i and %i: %i\n", x, y, z);
    } else if (op == 'sub' || op == '-')
    {
        int z = mul(x, y);
        printf("Multiplication of %i and %i: %i\n", x, y, z);
    } else if (op == 'sub' || op == '-')
    {
        int z = div(x, y);
        printf("Division of %i and %i: %i\n", x, y, z);
    } else
    {
        printf("Inputs are incorrects ");
    }
}

// Addition
int add(int a, int b)
{
    return a + b;
}

// Substraction
int sub(int a, int b)
{
    return a - b;
}

// Multiplication
int mul(int a, int b)
{
    return a * b;
}

// Division
int div(int a, int b)
{
    return a / b;
}