// Become familiar wih C syntax
// Learn to debug buggy code

#include <cs50.h>
// need stdio library
#include <stdio.h>

int main(void)
{
    // Ask for your name and where live
    string name = get_string("What is your name? "); // specified type and added semicolon
    string location = get_string("Where do you live? "); // Same here

    // Say hello
    printf("Hello, %s, from %s!\n", name, location);
    // print -> printf, %i -> %s, added \n and semicolan at the end
}
