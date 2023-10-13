#include <stdio.h>
#include <time.h>

int main() {
    clock_t start_time = clock();

    for (int i = 0; i < 1000000; i++) {
        printf("Pravin");
    }

    clock_t end_time = clock();

    double elapsed_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    printf("Elapsed Time: %f seconds\n", elapsed_time);

    return 0;
}