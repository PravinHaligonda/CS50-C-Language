#include <stdio.h>
#include <cs50.h>

int main(int argv, string argc[])
{
    if (argc == 2 && strcmp(argv[1], "-h") == 0)
    {
        printf("Usage: my_program [-h]\n");
        printf("Prints help information.\n");
    }
}