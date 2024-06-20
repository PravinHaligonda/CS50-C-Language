#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]) {
    string name = get_string("What's your name? ");
    printf("Hello, %s\n", name);
    printf("%i\n", argc);
}
