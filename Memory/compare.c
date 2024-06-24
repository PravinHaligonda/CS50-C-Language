#include <stdio.h>
#include <cs50.h>
#include <string.h>

void cmpstring(void);

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    if (x == y)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
    cmpstring();
}

void cmpstring(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
