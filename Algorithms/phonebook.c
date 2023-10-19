#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;



int main(void)
{
    string names[] = {"Carter", "David"};
    string numbers[] = {"2236568946", "5688956468"};

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found. %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found.\n");
    return 1;
}