#include <stdio.h>

typedef *char string;

int main(void)
{
    string s = "Hello";
    printf("%s\n", s);
}