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

    

    fn.fname = "Pravin";
    fn.lname = "Haligonda";

    printf("Fullname: %s %s\n", fn.fname, fn.lname);
}