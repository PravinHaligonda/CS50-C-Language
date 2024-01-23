#include <stdio.h>
#include <cs50.h>

typedef struct
{
    string fname;
    string lname;
}
fullname;

int main(void)
{
    fullname fn;

    char *fst = get_string("First Name: ");
    char *lst = get_string("Last Name: ");

    fn.fname = fst;
    fn.lname = lst;

    printf("Fullname: %s %s\n", fn.fname, fn.lname);
}