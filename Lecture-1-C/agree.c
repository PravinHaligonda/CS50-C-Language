#include <stdio.h>
#include <cs50.h>

int main(void) {
    char c = get_char("Do you agreed?");
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Disagreed.\n");
    }
}