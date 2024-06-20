#include <stdio.h>
#include <cs50.h>

void error_usage() {
    printf("Usage:   run \n");
}

int main(int argc, string argv[]) {
    if (argc >= 2) {printf("%s\n", argv[1]);} else { error_usage(); }
}
