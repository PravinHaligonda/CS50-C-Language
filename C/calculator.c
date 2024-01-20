#include <stdio.h>
#include <cs50.h>
#include <string.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divison(int a, int b);

int main(void)
{
    int x = get_int("X: ");
    int y = get_int("Y: ");
    printf("['add' or '+']\n");
    printf("['sub' or '-']\n");
    printf("['mul' or '*']\n");
    printf("['div' or '/']\n");
    string op = get_string("Operation to perform: ");

    if (strcmp(op, "add") == 0 || strcmp(op, "+") == 0)
    {
        int z = add(x, y);
        printf("Addition of %i and %i: %i\n", x, y, z);
    }
    else if (strcmp(op, "sub") == 0 || strcmp(op, "-") == 0)
    {
        int z = sub(x, y);
        printf("Substraction of %i and %i: %i\n", x, y, z);
    }
    else if (strcmp(op, "mul") == 0 || strcmp(op, "*") == 0)
    {
        int z = mul(x, y);
        printf("Multiplication of %i and %i: %i\n", x, y, z);
    }
    else if (strcmp(op, "div") == 0 || strcmp(op, "/") == 0)
    {
        if (y != 0)
        {
            int z = divison(x, y);
            printf("Division of %i and %i: %i\n", x, y, z);
        }
        else
        {
            printf("Cannot be divided by zero.");
        }


    }
    else
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
int divison(int a, int b)
{
    return a / b;
}