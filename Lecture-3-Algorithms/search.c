#include <stdio.h>
#include <cs50.h>
#include <string.h>

/*
int main(void)
{
    int arr[] = {100, 50, 200, 500, 2, 1, 15};

    int n = get_int("Search: ");
    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
}
*/

/*
int main(void)
{
    string names[] = {"table", "phone", "laptop", "mouse"};

    string input = get_string("Search: ");
    for (int i = 0; i < sizeof(names); i++)
    {
        if (strcmp(names[i], input) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
}
*/

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