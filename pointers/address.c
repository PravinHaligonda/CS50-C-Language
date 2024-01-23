#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "Pravin";

    printf("%p", s[0]);
    printf("%p", s[1]);
    printf("%p", s[2]);
    printf("%p", s[3]);
    printf("%p", s[4]);
    printf("%p\n", s[5]);
}