#include <stdio.h>
#include <cs50.h>

void block(int n);

int main(void) {

    // Prompt user for positive number
    int n;
    do
    {
        n = get_int("Size:");
        block(n);
    }
    while (n < 1);

}

// Print n-by-n grid of bricks
void block(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
