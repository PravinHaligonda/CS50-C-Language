#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    // string names[] = {"John", "Carter", "David", "Emma"};
    // string numbers[] = {"7070707070", "5689452389", "6598457823", "8978456512"};

    person people[3];
    people[0].name = "John";
    people[0].number = "7070707070";

    people[1].name = "Carter";
    people[1].number = "5689452389";

    people[2].name = "David";
    people[2].number = "6598457823";

    string name = get_string("Enter the name: ");

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Number: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
}