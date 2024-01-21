#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;


int main(void)
{
    person people[3];

    people[0].name = "John";
    people[0].number = "0001";

    people[1].name = "Carter";
    people[1].number = "0002";

    people[2].name = "Hello";
    people[2].number = "0003";

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(name[i], name) == 0)
        {
            printf("Number: %s\n", number[i]);
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
}