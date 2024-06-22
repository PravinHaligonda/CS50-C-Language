#include <stdio.h>

// Prototype
void arithmatic(void);

int main(void) {
    char *s = "HI!";
    printf("%c", s[0]);
    printf("%c", s[1]);
    printf("%c\n", s[2]);
    arithmatic();
}

// pointer arithmatic
void arithmatic(void) {
    char *p = "PRAVIN";
    printf("%c", *p);
    printf("%c", *(p + 1));
    printf("%c", *(p + 2));
    printf("%c", *(p + 3));
    printf("%c", *(p + 4));
    printf("%c\n", *(p + 5));
}
