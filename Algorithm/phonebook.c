#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
    string names[] = {"John", "Carter", "Hello"};
    string numbers[] = {"0000001", "0000002", "0000003"};

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Number: %s\n", numbers[i]);
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
}