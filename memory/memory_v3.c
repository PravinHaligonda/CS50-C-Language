#include <stdio.h>

typedef int integer;
typedef char *string;

int main(void)
{
    string p = "Hello";
    printf("%s\n", p);
    integer s = 6;
    printf("%i\n", s);
}