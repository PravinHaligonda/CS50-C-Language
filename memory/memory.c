#include <stdio.h>
#include <cs50.h>

/*
int main(void)
{
    int n = 3;
    int *p = &n; // * is a pointer to store the address of variable n; and & is a address at which the variable to choose.
    printf("N: %p\n", p); // %p to place the pointer
}
*/
/* It is like go to the address of n and tell me what is there. */

/*
int main(void)
{
    int n = 50;
    int *p = &n;
    printf("N: %i\n", *p);
}
*/

// String == * char

string strin(void);

int main(void)
{
    char *s = "Hi!";
    printf("%s\n", s);
    strin();
}

string strin(void)
{
    char *greet = "Hello";
    printf("%p\n", &greet[0]);
    printf("%p\n", &greet[1]);
    printf("%p\n", &greet[2]);
    printf("%p\n", &greet[3]);
    printf("%p\n", &greet[4]);
}
