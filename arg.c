#include <stdio.h>
#include <cs50.h>
#include <string.h>

void error_usage(void) {
    printf("Usage:   run \n");
}

int main(int argc, string argv[]) {
    if (argc < 3) { printf("%s\n", argv[1]); } else { error_usage(); }
    for (int i = 2; i < argc; i+=2){
        if (argv[i][0] != '-') { error_usage(); }
        if (strlen(argv[i]) != 2) { error_usage(); }
    }
}
