#include <stdio.h>
#include <cs50.h>

void error_usage(void) {
    printf("Usage:   run \n");
}

int main(int argc, string argv[]) {
    if (argc < 4) { printf("%s\n", argv[1]); } else { error_usage(); }
    for (int i = 2; i < argc; i+=2){
        if (argv[i][0] != '-') { error_usage(); } else { printf("Hello, World\n"); }
    }
}
