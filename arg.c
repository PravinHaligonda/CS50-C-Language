#include <stdio.h>
#include <cs50.h>

void greet(void) {
    printf("Hello, world");
}

int main(int argc, string argv[]) {
    if (argv[1] == "greet"){
        greet();
    }
    else
    {
        print("Invalid Command");
    }
}

