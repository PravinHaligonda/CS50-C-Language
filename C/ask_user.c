#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Enter your name: ");
    printf("Your name: %s\n", name);
    return 0;
}