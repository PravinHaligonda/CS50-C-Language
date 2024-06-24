#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// Buggy
// Solved in mallo.c
int main(void)
{
    char *s = get_string("s: ");
    char *t = s;

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);
}

