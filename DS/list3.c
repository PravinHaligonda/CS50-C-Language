#include <stdio.h>
#include <stdlib.h>

int main(void) {

    typedef struct node
    {
        int number;
        struct node *next;
    } node;

    node *list = NULL;

    node *n = malloc(sizeof(node));
    
}
