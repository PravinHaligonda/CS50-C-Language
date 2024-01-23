#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // This behaves like a string.
    char *s = get_string("Enter your name: ");
    printf("%s\n", s);
}