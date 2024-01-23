#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Taking inputs from the user.
    char *s = get_string("s: ");

    // Allocate the memory for variable t.
    char *t = malloc(strlen(s) + 1);

    // copy every character in var s and '0\n' null character.
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    // Check for valid input length.
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Show it
    printf("S: %s\n", s);
    printf("S: %p\n", &s);
    printf("T: %s\n", t);
    printf("T: %p\n", &s);
    }