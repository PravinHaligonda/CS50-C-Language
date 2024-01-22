#include <stdio.h>

int main(void)
{
    char *c = "Hi!";
    printf("%c\n", *c);
    printf("%c\n", *(c + 1));
    printf("%c\n", *(c + 2));
}