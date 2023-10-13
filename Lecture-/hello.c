#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long l = get_long("Enter your name: ");
    printf("Hello,  %li.\n", l);
}