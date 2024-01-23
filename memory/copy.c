#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("S: %s\n", s);

    string t = s;

    t[0] = toupper(t[0]);


    printf("S: %s\n", s);
    printf("t: %s\n", t);

}