#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Enter your name: ");
    int age = get_int("Enter your age: ");
    printf("Hello, %s\n", name);
    printf("%s is %i years old!\n", name, age);
    return 0;
}