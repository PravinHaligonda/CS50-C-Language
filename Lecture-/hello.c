#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string first = get_string("Enter your first name? ");
    string last = get_string("Enter your last name? ");
    printf("Hello, %s %s\n", first, last);
}