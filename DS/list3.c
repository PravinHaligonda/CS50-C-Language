#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(int argc, char *argv[]) {

    node *list = NULL;

    for (int i = 1; i < argc; i++){
        int number = atoi(argv[i]);
        node *n = malloc(sizeof(node));
        if (n == NULL) {
            return 1;
        }
        n->number = number;
        n->next = list
        list = n;
    }

    // print hole list

    node *ptr = list;
    while (prt != NULL) {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }

    // node *n = malloc(sizeof(node));
    // (*n).number = 1;
    // // n->number = 1;
    // (*n).next = NULL;

    // list = n;

    // node *n = malloc(sizeof(node));
    // (*n).number = 2;
    // (*n).next = NULL;

    // (*n).next = list;


}
