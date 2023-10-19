#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Carter", "David"};
    string numbers[] = {"2236568946", "5688956468"};

    string name = get_string("Name: ");
    for (i = 0; i < 2; i++)
    {
        if (strcmp(names[i], i) == 0)
        {
            printf("Found.\n");
            return 0;
        }
    }
    printf("Not Found.\n");
    return 1;
}