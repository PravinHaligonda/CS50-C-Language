#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(int argc, char *argv[]) {

    node *list = NULL;

    for (int i = 0;)

    node *n = malloc(sizeof(node));
    (*n).number = 1;
    // n->number = 1;
    (*n).next = NULL;

    list = n;

    node *n = malloc(sizeof(node));
    (*n).number = 2;
    (*n).next = NULL;

    (*n).next = list;


}
