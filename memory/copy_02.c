#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("S: %s\n", s);
    printf("T: %s\n", t);
}