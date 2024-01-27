#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
    string names[] = {"John", "Carter", "David", "Emma"};
    string numbers[] = {"7070707070", "5689452389", "6598457823", "8978456512"};

    string name = get_string("Enter the name: ");

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Name: %s\n", names[i]);
            printf("Number: %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");

}