#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    int count = (argc - 1);
    printf("%i\n", count);
    if (argc >= 2)
    {
        printf("Hello, %s\n", argv[count]);
    }
    else
    {
        printf("Hello, world");
        return 0;
    }
}