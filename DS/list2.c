#include <stdio.h>
#include <stdlib.h>

int main(void) {

    typedef struct
    {
        char *name;
        double number;
    } person;

    person people[1];

    people[0].name = "Pravin";
    people[0].number = 7030260613;

    printf("Name: %s\n", people[0].name);
    printf("Number: %.0lf\n", people[0].number);

}
