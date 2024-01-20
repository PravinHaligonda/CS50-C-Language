#include <stdio.h>


void meow(void)
{
    printf("meow\n");
}


int main(void)
{
    int i = 0;
    for (i = 0; i < 3; i++;)
    {
        meow()
    }
}

