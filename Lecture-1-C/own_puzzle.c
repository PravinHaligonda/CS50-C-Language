#include <stdio.h>
#include <cs50.h>

// Prototype
void meow(int n);

// Main Function
int main(void) {
    meow(5);
}

// arguments: int n
// Returns: Nothing
void meow(int n) {
    for (int i = 0; i < n; i++) {
        printf("Meow\n");
    }
}
