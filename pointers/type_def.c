#include <stdio.h>
#include <cs50.h>

typedef struct
{
    char *fname;
    char *lname;
    int year;
}
fullname;

int age(int n);

int main(void)
{
    fullname fn;

    char *fst = get_string("First Name: ");
    char *lst = get_string("Last Name: ");
    int year = get_int("Age: ");

    fn.fname = fst;
    fn.lname = lst;

    printf("Fullname: %s %s\n", fn.fname, fn.lname);
    age(year);

int age(int n)
{
    printf("You are %i years old.", n);
    return 0;
}