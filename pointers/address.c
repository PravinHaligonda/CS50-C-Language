#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Enter your name: ");
    // This behaves like a string.
    char *s = &name;
    printf("%s\n", *s);


}