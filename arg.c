#include <stdio.h>
#include <cs50.h>

void greet(void) {
    printf("Hello, world");
}

int main(int argc, string argv[]) {
    if (argv[1] == 'g'){
        greet();
    }
    else
    {
        print("Invalid Command");
    }
}

