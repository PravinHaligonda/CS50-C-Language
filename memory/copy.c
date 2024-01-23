#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("S: %s\n", s);

    string t = s;

    printf("t[0]: %c\n", t[0]);
    printf("S: %s\n", s);
    printf("t: %s\n", t);

}