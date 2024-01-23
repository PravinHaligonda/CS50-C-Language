#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("S: ");

    string t = s;
    printf("S: %c\n", s[0]);
    printf("S's Address: %p\n", &s[0]);
    printf("T: %c\n", t[0]);
    printf("T's Address: %p\n", &t[0]);

}